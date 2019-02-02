#include "computorV1.h"
#include <stdio.h>
#include <stdlib.h>
#define PCRE2_CODE_UNIT_WIDTH 8
#define OVECMAX 30
#include <pcre.h>

int format(char *str_request) {
	int err;
	regex_t preg;
	//const char *regex = "((?:^|\+|\-|)(\d+(\.\d+)?)((\*X\^\d+)|(\*X))?)+=((?:^|\+|\-|)(\d+(\.\d+)?)((\*X\^\d+)|(\*X))?)+";
	//const char *regex = "((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+=((?:^|\\+|\\-|)(\\d+(\\.\\d+)?)((\\*X\\^\\d+)|(\\*X))?)+";
	const char *regex = "(^[:digit:])";
	err = regcomp(&preg, regex, REG_NOSUB | REG_EXTENDED);
	if (err == 0) {
		int match;
		match = regexec(&preg, str_request, 0, NULL, 0);
		regfree(&preg);
		if (match == 0) {
			printf("%s est une adresse internet valide\n", str_request);
			printf("match\n");
		}
		else if (match == REG_NOMATCH) {
			printf("%s n\'est pas une adresse internet valide\n", str_request);
			printf("no match\n");
		}
		else {
			char *text;
			size_t size;
			size = regerror(err, &preg, NULL, 0);
			text = malloc(sizeof (*text) * size);
			if (text) {
				regerror(err, &preg, text, size);
				fprintf(stderr, "%s\n", text);
				free(text);
			}
			else {
				fprintf(stderr, "Memoire insuffisante\n");
				exit(1);
			}
			printf("error\n");
		}
	}
	printf("nothing\n");
	return (0);
}

int format2(char *str) {
	const char *regex = "(?:^|\\+|\\-|)";
	pcre *re = NULL;
	const char *err_msg;
	int err;
	int offsets[OVECMAX];

	re = pcre_compile(regex, 0, &err_msg, &err, NULL);

	if (pcre_exec( re, NULL, str, strlen(str), 0, 0, offsets, OVECMAX) > 0)
		printf("NO MATCH\n");
	else
		printf("MATCH\n");
	return 0;
}
