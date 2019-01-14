#include "computorV1.h"

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

void parse(char *equation) {
	char **members;
	int terms[equation_degree(equation)];
	int sign;
	char *ret;
	int i = 0;

	while (terms[i]) {
		terms[i] = 0;
		i++;
	}
	i = 0;
	members = ft_strsplit(equation, '=');
	while (members[i]) {
		sign = (i == 0) ? 1 : -1;
		if (atoi(members[i]) == 0) {
			i++;
			continue;
		}
		if (ft_isdigit(members[i][0])) {
			terms[atoi(strchr(members[i], '^')+1)] = terms[atoi(strchr(members[i], '^')+1)] + sign * atoi(members[i]);
		}
		while ((ret = ft_strpbrk(members[i], "+-")) != NULL) {
			terms[atoi(strchr(ret, '^')+1)] = terms[atoi(strchr(ret, '^')+1)] + sign * atoi(ret);
			memcpy(members[i], ret+1, strlen(ret));
		}
		i++;
	}
	printf("Reduced form: ");
	print_equation(terms);
	printf("Polynomial degree: %d\n", polynomial_degree(terms));
	solve(terms, polynomial_degree(terms));
}
