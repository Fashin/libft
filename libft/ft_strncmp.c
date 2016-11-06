/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:55:46 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 14:41:18 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 || s2 || n)
	{
		while (i < n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			else if (!s2[i] || !s2[i])
				return (0);
			i++;
		}
	}
	return (0);
}
