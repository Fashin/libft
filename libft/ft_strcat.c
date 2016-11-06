/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:52:30 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 17:18:00 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	char	*back;
	int		length_1;
	int		length_2;
	int		i;
	int		j;

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
	while (s2[j])
	{
		back[i + j] = s2[j];
		j++;
	}
	back[i + j] = '\0'; 
	return (back);
}
