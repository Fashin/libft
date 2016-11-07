/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:54:13 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/07 12:13:01 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		max;
	char		*csrc;
	char		*cdst;

	csrc = (char *)src;
	cdst = (char *)dest;
	max = 0;
	while (csrc[max] && max < n && csrc[max] != c)
	{
		cdst[max] = csrc[max];
		max++;
	}
	if (csrc[max] != c)
		return (NULL);
	return (cdst);
}
