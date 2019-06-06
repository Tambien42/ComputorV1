#include "computorV1.h"
#include <stdio.h>
#include <stdlib.h>
#define OVECCOUNT 30
#include <pcre.h>


int format(char *str) {
	pcre *re;
	const char *error;
	int erroffset;
	int ovector[OVECCOUNT];
	int rc;
	const char *regex = "^((\\+|\\-)?(\\d+(\\.\\d+)?|\\d+(\\.\\d+)?\\*|X)(\\^\\d+)?)+=((\\+|\\-)?(\\d+(\\.\\d+)?|\\d+(\\.\\d+)?\\*|X)(\\^\\d+)?)+$";

	re = pcre_compile(regex, 0,  &error,  &erroffset, NULL);
	if (re == NULL) {
		fprintf(stderr, "PCRE compilation failed at expression offset %d: %s\n", erroffset, error);
		return 1;
	}

	rc = pcre_exec(re, NULL, str, strlen(str), 0, 0,  ovector, OVECCOUNT);
	if (rc < 0) {
		switch(rc) {
			case PCRE_ERROR_NOMATCH:
				printf("No match!\n");
				break;/*More cases defined...*/
			default:
				printf("Match error %d\n", rc);
				break;
			pcre_free(re);
			return 1;
		}
	}
	if (rc < 3) {
		printf("Match did not catch all the groups\n");
		return 1;
	}
	printf("\nMatch succeeded at offset %d\n", ovector[0]);
	return 0;
}
