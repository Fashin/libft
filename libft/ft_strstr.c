/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:58:49 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 16:38:30 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	count = ft_strlen(little);
	while (big[i])
	{
		j = 0;
		k = i;
		while (big[k] == little[j])
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
