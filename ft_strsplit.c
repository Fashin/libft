/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:07:33 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/06 17:26:13 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_str_find_next(const char *str, char c, int skip)
{
	if (skip)
		while (*str != '\0' && *str == c)
			str++;
	else
		while (*str != '\0' && *str != c)
			str++;
	return (str);
}

static int			ft_str_count_splits(const char *str, char seps)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		str = ft_str_find_next(str, seps, 1);
		if (*str != '\0')
		{
			str = ft_str_find_next(str, seps, 0);
			i++;
		}
	}
	return (i);
}

static char			**ft_tabledel(char **ret, int len)
{
	int		i;

	i = 0;
	while (i < len)
		free(ret[i]);
	free(ret);
	return (NULL);
}

char				**ft_strsplit(const char *str, char c)
{
	char			**ret;
	int				i;
	const char		*next;

	if (str == NULL)
		return (NULL);
	ret = (char**)malloc(sizeof(char*) * (ft_str_count_splits(str, c) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		str = ft_str_find_next(str, c, 1);
		if (*str != '\0')
		{
			next = ft_str_find_next(str, c, 0);
			ret[i] = ft_strsub(str, 0, next - str);
			if (ret[i] == NULL)
				return (ft_tabledel(ret, i));
			i++;
			str = next;
		}
	}
	ret[i] = 0;
	return (ret);
}
