/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:29:56 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 19:36:52 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t				i;
	int					n;
	unsigned long int	res;

	i = 0;
	n = 1;
	res = 0;
	while ((str[i] == ' ' || str[i] == '\t') || (str[i] == '\n'
			|| str[i] == '\f') || (str[i] == '\v' || str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			n *= -1;
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * n);
}
