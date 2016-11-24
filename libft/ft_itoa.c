/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:14:09 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/24 17:30:18 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_length(int n)
{
	if (n < 10 && n > -10)
		return (1);
	else
		return (1 + ft_count_length(n / 10));
}

char	*ft_reverse_str(char *str)
{
	int		i;
	int		j;
	char	tmp;

	j = ft_strlen(str) - 1;
	i = 0;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == 0)
		return ("0");
	if (!(str = (char *)malloc(sizeof(char) * (ft_count_length(n) + 1))))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[ft_count_length(n)] = '-';
		n = n - 1;
	}
	else
		n = n - 1;
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[0] = str[0] + 1;
	str = ft_reverse_str(str);
	return (str);
}
