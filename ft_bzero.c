/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:24:59 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/24 16:03:43 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_bzero(void *s, size_t n)
{
	unsigned char	*s_str;
	size_t			i;

	s_str = s;
	if (n == 0)
		return (s);
	i = 0;
	while (i < n)
	{
		s_str[i] = '\0';
		i++;
	}
	return (s);
}
