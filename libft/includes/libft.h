/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:30:28 by fchuc             #+#    #+#             */
/*   Updated: 2019/01/18 12:24:08 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "get_next_line.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct 		s_matrix {
    size_t			rows;
    size_t			cols;
    double			*data;
}					t_matrix;

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int nb);
void				ft_putstr_fd(char *s, int fd);
void				ft_putstr(char *str);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *str);
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
int					ft_tolower(int c);
int					ft_toupper(int c);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned in, char));
char				*ft_strmap(char const *s, char (*f)(char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
int					ft_list_size(t_list *begin_list);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
int					ft_is_prime(int nb);
int					ft_find_next_prime(int nb);
char				*ft_strtoupper(char *s);
int					ft_factorial(int nb);
int					ft_is_lowercase(char c);
int					ft_is_negative(int n);
int					ft_is_uppercase(char c);
void				ft_list_rev(t_list **lst);
int					ft_list_size(t_list *begin_list);
t_list				*ft_list_last(t_list *begin_list);
void				ft_lstaddq(t_list **alst, t_list *new);
int					ft_power(int nb, int power);
void				ft_print_list(t_list *list);
int					ft_sqrt(int nb);
int					ft_str_is_lowercase(char *str);
int					ft_str_is_uppercase(char *str);
char				*ft_strrev(char *s);
int					ft_abs(int n);
char				*ft_strtolower(char *s);
char				*ft_strtoupper(char *s);
char				*ft_strcapitalize(char *str);
float				Q_rsqrt(float number);
int 				ft_strcspn(char *string, char *chars);
void 				ft_delspaces(char *sources);
char 				*ft_strpbrk(char *string1, char *string2);
bool 				leap_year(int year);
int 				pgcd(int n1, int n2);
int 				is_armstrongnumber(int number);
long long 			convertDecimalToBinary(int n);
int 				convertBinaryToDecimal(long long n);
int 				convertDecimalToOctal(int decimalNumber);
long long 			convertOctalToDecimal(int octalNumber);
int 				convertBinarytoOctal(long long binaryNumber);
long long 			convertOctalToBinary(int octalNumber);
double				ft_toradians(double degrees);
#endif
