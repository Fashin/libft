/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:38:53 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/07 12:22:14 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	//char	dst[2];
	char	s_dst[2];
	char	*src = "defg";
	//printf("%s\n", memmove(dst, src, 2));
	printf("%s\n", ft_memmove(s_dst, src, 2));
	return (0);
}
