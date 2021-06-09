/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:22:08 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/25 05:58:08 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		str1;
	int		str2;
	char	*final;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	str1 = ft_strlen((char *)s1);
	str2 = ft_strlen((char *)s2);
	final = (char *)malloc(str1 + str2 + 1);
	if (final == NULL)
		return (NULL);
	dest = final;
	while (*s1)
		*dest++ = *s1++;
	while (*s2)
		*dest++ = *s2++;
	*dest = '\0';
	return (final);
}
