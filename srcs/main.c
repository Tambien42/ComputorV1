#include "computorV1.h"

static void help() {
	printf("Usage :    ./computorv1 [\"equation\"]\n");
}

//          5 * X^0 + 4 * X^1 - 6 * X ^ 2 = 3 * X^   0
int main(int argc, char const *argv[]) {
	char *equation;

	if (argc < 2 || argc > 2) {
		help();
		exit(0);
	}
	equation = ft_memalloc(ft_strlen(argv[1]));
	ft_strcpy(equation, argv[1]);
	ft_delspaces(equation);
	if (format(equation) != 0) {
		help();
		exit(0);
	}

	parse(equation);
	//free(equation);
	return 0;
}
