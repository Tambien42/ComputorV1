#include "computorV1.h"
#include <stdio.h>

int polynomial_degree(char *equation) {
	int degree = 0;
	int max = 0;
	char *copy;
	char *ret;

	copy = malloc(sizeof(char) * strlen(equation) +1);
	strncpy(copy, equation, strlen(equation));
	while ((ret = strchr(copy, 'X')) != NULL) {
		if ((strchr(ret, '^')) != NULL) {
			max = atoi(ret+2);
			memcpy(copy, ret+2, strlen(ret-1));
			if (max > degree) {
				degree = max;
			}
		}
		else {
			if (degree == 1 || degree == 0)
				degree = 1;
			memcpy(copy, ret+1, strlen(ret-1));
		}
	}
	free(copy);
	return degree;
}

int get_coefficient(char *str) {
	if (str[0] == 'X' || (str[0] == '-' && str[1] == 'X') || (str[0] == '+' && str[1] == 'X')) {
		return 1;
	}
	return atoi(str);
}

void parse_terms(int *terms, char *str, int sign) {
	if (strchr(str, 'X') != NULL) {
		if (strchr(str, '^') != NULL) {
			terms[atoi(strchr(str, '^')+1)] = terms[atoi(strchr(str, '^')+1)] + sign * get_coefficient(str);
		}
		else {
			terms[1] = terms[1] + sign * get_coefficient(str);
		}
	}
	else {
		terms[0] = terms[0] + sign * get_coefficient(str);
	}
}

void parse(char *equation) {
	char **members;
	int terms[polynomial_degree(equation)];
	int sign;
	char *ret;
	char *copy;
	int i = 0;
	int j = 0;

	while (terms[i]) {
		terms[i] = 0;
		i++;
	}
	i = 0;
	members = ft_strsplit(equation, '=');
	while (members[i]) {
		sign = (i == 0) ? 1 : -1;
		ret = members[i];
		j = 0;
		while (members[i][j]) {
			if ((members[i][0] == '+' || members[i][0] == '-') && j == 0)
				j++, ret++;
			else if (members[i][j] == '+' || members[i][j] == '-') {
				copy = malloc(sizeof(char) * j +1);
				strncpy(copy, members[i], j);
				parse_terms(terms, copy, sign);
				free(copy);
				memcpy(members[i], ret, strlen(ret-1));
				ret = members[i];
				j = 0;
			}
			else if (members[i][j+1] == '\0' && members[i] != NULL) {
				parse_terms(terms, members[i], sign);
				j++;
				ret++;
			}
			else {
				j++;
				ret++;
			}
		}
		i++;
	}
	printf("Reduced form: ");
	if (polynomial_degree(equation) == 0 || check_zero(terms, polynomial_degree(equation)) == 0)
		printf("%d = 0\n", terms[0]);
	else
		print_equation(terms, polynomial_degree(equation));
	printf("Polynomial degree: %d\n", polynomial_degree(equation));
	solve(terms, polynomial_degree(equation));
}
