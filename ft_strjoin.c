/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:25:17 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:33:00 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *src1, char const *src2)
{
	char	*str;
	size_t	src1_len;
	size_t	src2_len;

	src1_len = ft_strlen(src1);
	src2_len = ft_strlen(src2);
	str = malloc((src1_len + src2_len) + 1);
	ft_memcpy(str, src1, src1_len);
	ft_memcpy(str + src1_len, src2, src2_len);
	str[src1_len + src2_len] = '\0';
	return (str);
}
