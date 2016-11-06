/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:48:33 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 16:50:25 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	while (s[i])
	{
		if (s[i] == c)
			pos = i;
		i++;
	}
	if (pos == 0 && s[0] != c)
		return (NULL);
	else
		return ((char *)s + pos);
}
