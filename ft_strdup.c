/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:07:06 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:32:48 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	length;
	char	*duplicate;

	length = ft_strlen(s1);
	duplicate = ft_calloc(length + 1, sizeof(char));
	ft_memcpy(duplicate, s1, length);
	duplicate[length] = '\0';
	return (duplicate);
}
