/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:01:57 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 18:21:17 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	size_t		n;
	char		*ptr;

	if (len == 0)
		return (0);
	if (!(ptr = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	n = 0;
	while (n < len)
	{
		ptr[n] = 0;
		n++;
	}
	b = (void *)ptr;
	return (b);
}
