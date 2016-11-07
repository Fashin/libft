/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:17:20 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/07 12:20:48 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		max;
	char		*cdst;
	char		*csrc;

	csrc = (char *)src;
	cdst = (char *)dst;
	max = 0;
	while (csrc[max] && max < len)
	{
		cdst[max] = csrc[max];
		max++;
	}
	return (cdst);
}
