/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:38:59 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/07 12:44:27 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*ss1;
	char		*ss2;
	size_t		max;

	max = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while (ss1[max] && ss2[max] && ss1[max] == ss2[max] && max < n)
		max++;
	if (max == n)
		return (0);
	else
		return (ss1[max] - ss2[max]);
}
