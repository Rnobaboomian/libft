/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:04:04 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:31:41 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	id;

	if (dst == NULL && src == NULL)
		return (NULL);
	id = 0;
	while (id < n)
	{
		((unsigned char *)dst)[id] = ((unsigned char *)src)[id];
		id++;
	}
	return (dst);
}
