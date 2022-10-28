/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libprintf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 18:12:19 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/26 18:32:07 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdlib.h>
# include <unistd.h>

void		ft_bzero(void *str, size_t size);
void		*ft_calloc(size_t num, size_t size);
int			ft_isalnum(int a);
int			ft_isalpha(int a);
int			ft_isascii(int a);
int			ft_isdigit(int a);
int			ft_isprint(int a);
void		*ft_memcpy(void *dest, const void *src, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t num);
void		*ft_memset(void *str, int val, size_t size);
char		*ft_strchr(const char *str, int character);
char		*ft_strdup(const char *str);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *str1, const char *str2, size_t size);
char		*ft_strnstr(const char *str1, const char *str2, size_t size);
void		*ft_memchr(const void *ptr, int value, size_t size);
char		*ft_strrchr(const char *str, int a);
char		*ft_substr(char const *str, unsigned int start, size_t len);
int			ft_tolower(int a);
int			ft_toupper(int a);
int			ft_atoi(const char *str);
int			ft_memcmp(const void *s1, const void *s2, size_t size);
char		*ft_strjoin(char const *str1, char const *str2);
char		*ft_strtrim(char const *s, char const *d);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		**ft_split(char const *str1, char c);
int			ft_len(int n);

#endif