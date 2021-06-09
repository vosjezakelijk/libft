/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:11:35 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/24 17:37:50 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	result;

	result = count * size;
	ptr = (char *)malloc(result);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, result);
	return (ptr);
}
