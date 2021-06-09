/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:47:57 by hsamatha          #+#    #+#             */
/*   Updated: 2021/06/09 12:55:27 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(const char *str); //convert char(input -- string) to int
void	*ft_calloc(size_t count, size_t size); //mem allocation -- for specified number elements multiplied by its size
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd); //put char by char, output str to the file descriptor fd.
void	ft_putendl_fd(char *s, int fd); //put str + add ending \n
void	ft_putnbr_fd(int n, int fd); //recursion, output int n to the standard output
char	*ft_strchr(const char *s, int c); //find
void	*ft_bzero(void *s, size_t n); //memset with zeros 
void	*ft_memchr(const void *s, int c, size_t n); // mem function, returns pointer when found
char	*ft_strdup(const char *s1); //duplicate string using malloc
size_t	ft_strlen(const char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
int	    ft_lstsize(t_list *lst); //count len until no tmp->next
int		ft_strncmp(const char *s1, const char *s2, size_t n); //returns int if 2 strings are not identical
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n); //mem function, coping src to dest
void	*ft_memccpy(void *dst, const void *src, int c, size_t n); //mem functions, coping src to dest for specified length
void	*ft_memmove(void *dst, const void *src, size_t len); //<3 mem function, copies in itself, !! if dest >> src copies from the end
int		ft_memcmp(const void *s1, const void *s2, size_t n); //mem function, returns if different
size_t	ft_strlcpy(char *dst, const char *src, size_t size); // write no more bytesthat in dest,preventing buff overflow, "size-bounded string copying"
size_t	ft_strlcat(char *dst, const char *src, size_t size); // "size-bounded strings catination"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2); //join 2 strings in final
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //Applies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.
char	*ft_strtrim(char const *s1, char const *set); //Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL.
char	*ft_itoa(int n); //convert int to char(output -- string)
char	**ft_split(char const *s, char c); //split a string by specified character, write to array
void	*ft_memset(void *b, int c, size_t len); // fill with specified int

#endif
