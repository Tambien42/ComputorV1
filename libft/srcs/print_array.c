#include "libft.h"

void print_array_int(int *array, int length) {
	int i;

	i = 0;
	while (i < length) {
		ft_putnbr(array[i]);
		i++;
	}
}

void print_array_char(char **array, int length) {
	int i;

	i = 0;
	while (i < length) {
		ft_putchar(*array[i]);
		i++;
	}
}

void print_array_str(char **array, int length) {
	int i;

	i = 0;
	while (i < length) {
		ft_putstr(array[i]);
		i++;
	}
}