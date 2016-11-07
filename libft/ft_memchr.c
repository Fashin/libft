/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:31:49 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/07 12:36:02 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		max;
	char		*cstr;

	max = 0;
	cstr = (char *)str;
	while (cstr[max] && max < n && cstr[max] != c)
		max++;
	if (cstr[max] == c)
		return ((char *)cstr + max);
	else
		return (NULL);
}
