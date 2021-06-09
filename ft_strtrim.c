/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:37:07 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/25 05:32:16 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	size;
	char			*first;
	char			*last;
	char			*result;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_check(s1[i], set))
		i++;
	first = (char *)&s1[i];
	i = ft_strlen(s1) - 1;
	if (i != -1)
		while (i >= 0 && ft_check(s1[i], set))
			i--;
	last = (char *)&s1[i];
	if (!*s1 || first == last)
		size = 2;
	else
		size = last - first + 2;
	if (!(result = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(result, first, size);
	return (result);
}
