/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:32:00 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 14:57:45 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"
#include <stdio.h>
#include <stdlib.h>
#include <pcre.h>
#define OVECCOUNT 30

int	format(char *str)
{
	pcre		*re;
	const char	*error;
	int			erroffset;
	int			ovector[OVECCOUNT];
	int			rc;
	const char	*regex = "^((\\+|\\-)?(\\d+(\\.\\d+)?|\\d+(\\.\\d+)?\\*X|X)(\\^\\d+)?)+=((\\+|\\-)?(\\d+(\\.\\d+)?|\\d+(\\.\\d+)?\\*X|X)(\\^\\d+)?)+$";

	re = pcre_compile(regex, 0, &error, &erroffset, NULL);
	if (re == NULL)
	{
		fprintf(stderr, "PCRE compilation failed at expression offset %d: %s\n", erroffset, error);
		return (1);
	}
	rc = pcre_exec(re, NULL, str, strlen(str), 0, 0, ovector, OVECCOUNT);
	if (rc < 0)
	{
		switch (rc)
		{
			case PCRE_ERROR_NOMATCH:
				printf("No match!\n");
				break ;
			default:
				printf("Match error %d\n", rc);
				break ;
			pcre_free(re);
			return (1);
		}
	}
	printf("\nMatch succeeded at offset %d\n", ovector[0]);
	return (0);
}
