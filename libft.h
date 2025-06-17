/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkorpela <kkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:14:30 by kkorpela          #+#    #+#             */
/*   Updated: 2025/04/29 12:41:14 by kkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
void		*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		*ft_memmove(void *dest_str, const void *src_str, size_t n);
char		*ft_strdup(const char *str);
char		*ft_strchr(const char *str, int search_str);
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
char		*ft_strrchr(const char *str, int c);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nitems, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isprint(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isalnum(char c);
int			ft_isalpha(int c);
int			ft_atoi(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
