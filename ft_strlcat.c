/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:29:44 by hsamatha          #+#    #+#             */
/*   Updated: 2021/06/09 12:43:24 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	while ((dst[i] != '\0') && (i < size - 1))
		i++;
	while ((src[j] != '\0') && (i < size - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (!(i == size - 1) || !(i == size))
		dst[i] = '\0';
	return (src_len + dst_len);
}
