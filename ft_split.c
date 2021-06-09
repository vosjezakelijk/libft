/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 05:05:29 by hsamatha          #+#    #+#             */
/*   Updated: 2021/06/09 12:38:09 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_breaks(const char *s, char c, size_t i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static size_t	ft_words(char const *s, char c) //count words by specified char
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		i = ft_breaks(s, c, i);
		if (s[i])
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

static size_t	ft_l(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char		**ft_free(char **s, size_t j)
{
	while (j > 0)
		free(s[j--]);
	free(s);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	f;
	char	**r;

	if (!s || !(r = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		j = 0;
		f = 0;
		i = ft_breaks(s, c, i);
		if (s[i])
		{
			if (!(r[j] = (char*)malloc(sizeof(char) * (ft_l(s + i, c) + 1)))) //malloc for length
				return (ft_free(r, j));
			while (s[i] && s[i] != c)
				r[j][f++] = s[i++]; // write in 2X array
			r[j++][f] = '\0'; 
		}
	}
	r[j] = '\0';
	return (r);
}
