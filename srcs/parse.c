#include "computorV1.h"
#include <stdio.h>

// void Fraction::simplification(){
//     int r;
//     r=PGCD(numerateur,denominateur);
//     numerateur=numerateur/r;
//     denominateur=denominateur/r;
//     //pas de - au dénominateur
//     if(denominateur<0){
//         numerateur=-numerateur;
//         denominateur=-denominateur;
//         }
// }

int equation_degree(char *equation) {
	int degree = 0;
	char *tmp;

	tmp = equation;
	while (1) {
		tmp = strchr(tmp, '^');
		if (tmp == NULL) break;
		tmp++;
		if (atoi(tmp) > degree) {
			degree = atoi(tmp);
		}
	}
	return degree;
}

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
	return degree;
}

void parse_terms(int *terms, char *str, int sign) {
	if (strchr(str, 'X') != NULL) {
		if (strchr(str, '^') != NULL) {
			terms[atoi(strchr(str, '^')+1)] = terms[atoi(strchr(str, '^')+1)] + sign * atoi(str);
		}
		else {
			terms[1] = terms[1] + sign * atoi(str);
		}
	}
	else {
		terms[0] = terms[0] + sign * atoi(str);
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
	print_array_int(terms, polynomial_degree(equation));
	printf("Reduced form: ");
	print_equation(terms, polynomial_degree(equation));
	printf("Polynomial degree: %d\n", polynomial_degree(equation));
	solve(terms, polynomial_degree(equation));
}
