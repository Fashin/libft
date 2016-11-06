/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:58:49 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 16:38:19 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		count;

	i = 0;
	count = (size_t)ft_strlen(little);
	while (big[i] && i < length)
	{
		j = 0;
		k = i;
		while (big[k] == little[j] && k < length)
		{
			k++;
			j++;
		}
		if (j == count)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
