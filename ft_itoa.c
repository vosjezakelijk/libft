/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:33:01 by hsamatha          #+#    #+#             */
/*   Updated: 2020/11/24 22:33:51 by hsamatha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_min(int n)
{
	char		*result;

	n = 0;
	result = ft_strdup((const char *)"-2147483648");
	return (result);
}

static char	*ft_itoa_main(int n)
{
	char		*result;
	int			len;
	int			number;

	number = n;
	len = 1;
	while (number /= 10)
		len += 1;
	if (n < 0)
	{
		number = 1;
		n = -n;
	}
	result = (char *)malloc(len + number + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '-';
	result[len + number] = '\0';
	while (len-- != 0)
	{
		result[len + number] = (n % 10) + '0';
		n = n / 10;
	}
	return (result);
}

char		*ft_itoa(int n)
{
	if (n == (-2147483648))
		return (ft_itoa_min(n));
	return (ft_itoa_main(n));
}
