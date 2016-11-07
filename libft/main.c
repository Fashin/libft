/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:38:53 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/07 13:05:40 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	char	*ptr;
	void	**test;

	ptr = ft_memalloc(10);
	ptr = av[1];
	printf("%s\n", ptr);
	ptr = (void)ptr;
	ft_memdel(&*ptr);
	printf("%s\n", ptr);
	return (0);
}
