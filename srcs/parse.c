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

int polynomial_degree(int *terms) {
	int degree = 0;
	int i = 0;

	while (terms[i]) {
		if (terms[i] != 0) {
			degree = i;
		}
		i++;
	}
	return degree;
}

// if (atoi(members[i]) == 0) {
// 	i++;
// 	continue;
// }
// if (ft_isdigit(members[i][0])) {
// 	terms[atoi(strchr(members[i], '^')+1)] = terms[atoi(strchr(members[i], '^')+1)] + sign * atoi(members[i]);
// }
// while ((ret = ft_strpbrk(members[i], "+-")) != NULL) {
// 	terms[atoi(strchr(ret, '^')+1)] = terms[atoi(strchr(ret, '^')+1)] + sign * atoi(ret);
// 	memcpy(members[i], ret+1, strlen(ret));

void parse_terms(int*terms, char *str, int sign) {
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
	printf("%d %d %d\n", terms[0], terms[1], terms[2]);
}

void parse(char *equation) {
	char **members;
	int terms[equation_degree(equation)];
	int sign;
	char *ret;
	char *copy;
	int i = 0;
	while (terms[i]) {
		terms[i] = 0;
		i++;
	}
	i = 0;
	members = ft_strsplit(equation, '=');
	while (members[i]) {
		sign = (i == 0) ? 1 : -1;
		if (((ret = ft_strpbrk(members[i], "+-")) == NULL) && (members[i] != NULL)) {//FALSE
			printf("%s\n", members[i]);
		}
		while ((ret = ft_strpbrk(members[i], "+-")) != NULL) {
			printf("%c\n", members[i][(int) (ret - members[i])]);
			copy = malloc(sizeof(char) * strlen(members[i]));
			memcpy(copy, members[i], (int) (ret - members[i]));
			printf("copy:%s\n", copy);
			memcpy(members[i], ret+1, strlen(ret));
		}
		if (members[i] != NULL) {
			printf("%c\n", members[i][(int) (ret - members[i])]);
			copy = malloc(sizeof(char) * strlen(members[i]));
			memcpy(copy, members[i], strlen(members[i]));
			printf("copy:%s\n", copy);
		}
		i++;
	}
	printf("end:%d %d %d\n", terms[0], terms[1], terms[2]);
	printf("Reduced form: ");
	print_equation(terms);
	printf("Polynomial degree: %d\n", polynomial_degree(terms));
	solve(terms, polynomial_degree(terms));
}
