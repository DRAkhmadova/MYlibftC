/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:34:18 by oupside           #+#    #+#             */
/*   Updated: 2021/10/17 19:34:22 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char	*str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t	n, size_t	size);
int		ft_isalnum(int d);
int		ft_isalpha(int d);
int		ft_isascii(int d);
int		ft_isdigit(int d);
int		ft_isprint(int d);
char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int d, size_t n);
int		ft_memcmp(const void	*str1, const void	*str2, size_t	n);
void	*ft_memcpy(void	*dest, const void	*src, size_t	count);
void	*ft_memmove(void	*dest, const void	*src, size_t	len);
void	*ft_memset(void *s, int d, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int s);
char	*ft_strdup(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char	*dest, const char	*src, size_t	size);
size_t	ft_strlcpy(char	*dest, const char	*src, size_t	size);
size_t	ft_strlen(const char	*s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int s);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int d);
int		ft_toupper(int d);

#endif
