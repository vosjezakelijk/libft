/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:32:23 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/24 18:38:48 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	string;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	string = ft_strlen((char *)s);
	if (string < start)
		len = 0;
	else if ((string - start) < len)
		len = string - start;
	ptr = (char *)malloc((sizeof(char)) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < (int)len && s[i])
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
