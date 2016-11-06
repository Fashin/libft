/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:52:30 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 17:33:02 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlcat(char *s1, const char *s2, size_t n)
{
	char		*back;
	size_t		length_1;
	size_t		i;
	size_t		j;

	length_1 = ft_strlen(s1);
	i = 0;
	j = 0;
	if (!(back = (char *)malloc(sizeof(char) * (length_1 + n))))
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
