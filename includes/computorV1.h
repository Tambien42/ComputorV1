/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computorV1.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:56:12 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 14:56:14 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTORV1_H
# define COMPUTORV1_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"
# include <regex.h>

void	parse(char *equation);
int		polynomial_degree(char *equation, int degree);
void	solve(int *terms, int degree);
void	third_degree(int *terms);
void	second_degree(float discriminant, int *terms);
void	first_degree(int *terms);
void	zero_degree(int *terms);
float	discriminant(int *terms);
void	print_equation(int *terms, int length);
int		equation_degree(char *equation);
void	print_array(int *array, int length);
int		format(char *str);
void	fourth_degree();
int		check_zero(int *terms, int length);
void	decimal_to_fraction (double decimal);

#endif
