/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:06:28 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:31:31 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	id;

	id = 0;
	while (id < n)
	{
		if (((unsigned char *)s)[id] == (unsigned char)c)
			return (((unsigned char *)s) + id);
		id++;
	}
	return (NULL);
}
