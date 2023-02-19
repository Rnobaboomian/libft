/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:07:21 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:33:11 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	id;

	if (!dst || !src)
		return (0);
	id = 0;
	if (dstsize != 0)
	{
		while (src[id] != '\0' && id < (dstsize - 1))
		{
			dst[id] = src[id];
			id++;
		}
		dst[id] = '\0';
	}
	return (ft_strlen(src));
}
