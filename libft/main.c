/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:38:53 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/24 17:28:43 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	const char *str = "Hello Worlds"
	ft_putstr_fd(str, 0);
	return (0);
}
