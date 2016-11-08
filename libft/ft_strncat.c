/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:52:30 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/08 20:14:47 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*back;
	int			length_1;
	int			length_2;
	size_t		i;
	size_t		j;

	length_1 = ft_strlen(s1);
	length_2 = ft_strlen(s2);
	i = 0;
	j = 0;
	if (!(back = (char *)malloc(sizeof(char) * (length_1 + length_2 + 1))))
		return (NULL);
	while (s1[i])
	{
		back[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		back[i + j] = s2[j];
		j++;
	}
	back[i + j] = '\0';
	return (back);
}
