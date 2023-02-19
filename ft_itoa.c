/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:07:30 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:31:24 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	digit_count(long num)
{
	size_t	count;

	if (num < 0)
		count = 1;
	else
		count = 0;
	while (1)
	{
		num /= 10;
		count++;
		if (num == 0)
			break ;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	numb;
	char	*arr;
	size_t	count;

	numb = n;
	count = digit_count(n);
	arr = malloc((count + 1) * sizeof(char));
	if (numb < 0)
	{
		arr[0] = '-';
		numb *= -1;
	}
	arr[count] = '\0';
	while (1)
	{
		arr[count - 1] = (numb % 10) + '0';
		numb /= 10;
		count--;
		if (numb == 0)
			break ;
	}
	return (arr);
}
