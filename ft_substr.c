/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <arbaboom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:08:12 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/19 09:33:56 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			total_len;

	i = 0;
	if (start > ft_strlen(s))
		total_len = 0;
	else if (ft_strlen(s) - start > len)
		total_len = len;
	else
		total_len = ft_strlen(s) - start;
	str = (char *)malloc(total_len * sizeof (char));
	if (str)
		ft_strlcpy(str, s + start, total_len + 1);
	return (str);
}
