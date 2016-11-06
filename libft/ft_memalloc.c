/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:37:39 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 17:46:08 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memalloc(char *str, int size)
{
	int		i;
	char	*save;

	i = 0;
	if (!(save = (char *)malloc(sizeof(char) * ft_strlen(str))))
	   return (NULL);
	while (str[i])
	{
		save[i] = str[i];
		i++;
	}
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (save[i])
	{
		str[i] = save[i];
		i++;
	}
	free(save);
	return (str);
}
