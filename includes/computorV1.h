#ifndef COMPUTORV1_H
# define COMPUTORV1_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"
# include <regex.h>


// typedef struct s_frac {
//     int num;
//     int denom;
// } t_frac;

typedef struct {
	int numerator;
	unsigned int denominator; // Keep signs logical, denominator >= 0.
} Fraction;

void parse(char *equation);
int polynomial_degree(char *equation, int degree);
void solve(int *terms, int degree);
void third_degree(int *terms);
void second_degree(float discriminant, int *terms);
void first_degree(int *terms);
void zero_degree(int *terms);
float discriminant(int *terms);
void print_equation(int *terms, int length);
int equation_degree(char *equation);
void print_array(int *array, int length);
int format(char *str);
void fourth_degree();
Fraction dec2frac(double input);
int check_zero(int *terms, int length);

#endif
