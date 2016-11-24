/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:37:09 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/24 17:33:30 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (str)
	{
		i = -1;
		while (s[i] && i < start)
			i++;
		while (s[i++] && i - start <= len)
			str[(i - start) - 1] = s[i];
		str[i - start] = '\0';
		return (str);
	}
	return (NULL);
}
