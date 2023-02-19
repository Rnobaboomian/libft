/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbaboom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:16:34 by arbaboom          #+#    #+#             */
/*   Updated: 2022/03/21 19:16:40 by arbaboom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list				*next;
	int					size;

	size = 0;
	next = lst;
	while (next != NULL)
	{
		next = next -> next;
		size++;
	}
	return (size);
}
