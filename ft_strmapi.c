/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:53:36 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/24 22:47:16 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	char	*final;

	if (!s || !f)
		return (NULL);
	size = (ft_strlen(s) + 1);
	final = (char *)malloc(sizeof(char) * size);
	if (final == NULL)
		return (NULL);
	size = size - 2;
	final[size + 1] = '\0';
	while (size >= 0)
	{
		final[size] = f(size, s[size]);
		size--;
	}
	return (final);
}
