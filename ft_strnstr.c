/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:45:01 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/25 05:55:27 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	count;

	count = ft_strlen(needle);
	if (count == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) < count || len < count)
		return (NULL);
	i = 0;
	while (haystack[i] && i < (int)len)
	{
		j = 0;
		{
			while (((int)len > i + j) && needle[j] == haystack[i + j])
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
			i++;
		}
	}
	return (NULL);
}
