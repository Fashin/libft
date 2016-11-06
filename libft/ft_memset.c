/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:01:57 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/06 18:12:53 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		n;
	char		*ptr;

	if (!(ptr = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	n = 0;
	while (n < len)
	{
		ptr[n] = c;
		n++;
	}
	b = (void *)ptr;
	return (b);
}
