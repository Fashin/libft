/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:55:08 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/06 19:20:05 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;
	int		max;

	if (s != NULL)
	{
		i = 0;
		max = ft_strlen(s);
		while (i < max)
		{
			s[i] = '\0';
			i++;
		}
	}
}
