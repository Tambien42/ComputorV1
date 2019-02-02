#include "computorV1.h"
#include <stdio.h>
#include <stdlib.h>
#define PCRE2_CODE_UNIT_WIDTH 8
#define OVECMAX 30
#include <pcre.h>
#include <pcre2.h>

// int format(char *str_request) {
// 	int err;
// 	regex_t preg;
// 	//const char *regex = "((?:^|\+|\-|)(\d+(\.\d+)?)((\*X\^\d+)|(\*X))?)+=((?:^|\+|\-|)(\d+(\.\d+)?)((\*X\^\d+)|(\*X))?)+";
// 	//const char *regex = "((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+=((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+";
// 	const char *regex = "(^[:digit:])";
// 	err = regcomp(&preg, regex, REG_NOSUB | REG_EXTENDED);
// 	if (err == 0) {
// 		int match;
// 		match = regexec(&preg, str_request, 0, NULL, 0);
// 		regfree(&preg);
// 		if (match == 0) {
// 			printf("%s est une adresse internet valide\n", str_request);
// 			printf("match\n");
// 		}
// 		else if (match == REG_NOMATCH) {
// 			printf("%s n\'est pas une adresse internet valide\n", str_request);
// 			printf("no match\n");
// 		}
// 		else {
// 			char *text;
// 			size_t size;
// 			size = regerror(err, &preg, NULL, 0);
// 			text = malloc(sizeof (*text) * size);
// 			if (text) {
// 				regerror(err, &preg, text, size);
// 				fprintf(stderr, "%s\n", text);
// 				free(text);
// 			}
// 			else {
// 				fprintf(stderr, "Memoire insuffisante\n");
// 				exit(1);
// 			}
// 			printf("error\n");
// 		}
// 	}
// 	printf("nothing\n");
// 	return (0);
// }

// int format(char *str) {
// 	regex_t re;
//     int ret;
// 	const char *pattern = "";
//
//     if (regcomp(&re, pattern, REG_EXTENDED) != 0)
//         printf("ERROR\n");
//
//     ret = regexec(&re, str, (size_t) 0, NULL, 0);
//     regfree(&re);
//
//     if (ret == 0)
//         printf("MATCH\n");
// 	else if (ret == REG_NOMATCH) {
// 		printf("NOMATCH\n");
// 	}
//
// printf("nothing\n");
// 	return 0;
// }

int format(char *source) {
	pcre2_code *re;
	PCRE2_SPTR pattern;
	PCRE2_SPTR subject;
	int errornumber;
	int rc;
	PCRE2_SIZE erroroffset;
	size_t subject_length;
	pcre2_match_data *match_data;


	char *RegexStr = "((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+=((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+";

	pattern = (PCRE2_SPTR)RegexStr;// <<<<< This is where you pass your REGEX
	subject = (PCRE2_SPTR)source;// <<<<< This is where you pass your bufer that will be checked.
	subject_length = strlen((char *)subject);




	  re = pcre2_compile(
	  pattern,               /* the pattern */
	  PCRE2_ZERO_TERMINATED, /* indicates pattern is zero-terminated */
	  0,                     /* default options */
	  &errornumber,          /* for error number */
	  &erroroffset,          /* for error offset */
	  NULL);                 /* use default compile context */

	/* Compilation failed: print the error message and exit. */
	if (re == NULL)
	  {
	  PCRE2_UCHAR buffer[256];
	  pcre2_get_error_message(errornumber, buffer, sizeof(buffer));
	  printf("PCRE2 compilation failed at offset %d: %s\n", (int)erroroffset,buffer);
	  return 1;
	  }


	match_data = pcre2_match_data_create_from_pattern(re, NULL);

	rc = pcre2_match(
	  re,
	  subject,              /* the subject string */
	  subject_length,       /* the length of the subject */
	  0,                    /* start at offset 0 in the subject */
	  0,                    /* default options */
	  match_data,           /* block for storing the result */
	  NULL);

	if (rc < 0)
	  {
	  switch(rc)
	    {
	    case PCRE2_ERROR_NOMATCH: //printf("No match\n"); //
	    pcre2_match_data_free(match_data);
	    pcre2_code_free(re);
	    printf("FALSE\n");
	    //  break;
	    /*
	    Handle other special cases if you like
	    */
	    default: printf("Matching error %d\n", rc); //break;
	    }
	  pcre2_match_data_free(match_data);   /* Release memory used for the match */
	  pcre2_code_free(re);
                /* data and the compiled pattern. */
	  printf("FALSE\n");
	}
	else{
	  	if(rc > 0){
		    printf("TRUE\n");
		}
	}
	pcre2_match_data_free(match_data);
	pcre2_code_free(re);
	return 0;
}

int format2(char *str) {
	const char *regex = "((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+=((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+";
	pcre *re = NULL;
	const char *err_msg;
	int err;
	int offsets[OVECMAX];

	re = pcre_compile(regex, 0, &err_msg, &err, NULL);

	if (pcre_exec( re, NULL, str, strlen(str), 0, 0, offsets, OVECMAX) > 0)
		printf("NO MATCH\n"),printf("%d\n", pcre_exec( re, NULL, str, strlen(str), 0, 0, offsets, OVECMAX));
	else
		printf("MATCH\n");
	return 0;
}
