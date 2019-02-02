#ifndef COMPUTORV1_H
# define COMPUTORV1_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"
# include <regex.h>

void parse(char *equation);
int polynomial_degree(int *terms);
void solve(int *terms, int degree);
void third_degree();
void second_degree(int discriminant, int *terms);
void first_degree(int *terms);
void zero_degree(int *terms);
int discriminant(int *terms);
void print_equation(int *terms);
int equation_degree(char *equation);
void print_array(int *array, int length);
int format(char *equation);
int format2(char *equation);

#endif
