/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:38:53 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/24 18:49:24 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	t_list	*list;
	t_list	*list1;
	t_list	*list2;
	void const *str;
	void const *str1;
	void const *str2;

	str = (void const *)"test";
	list = ft_lstnew(str, 4);
	str1 = (void const *)"bonjour";
	list1 = ft_lstnew(str1, 6);
	str2 = (void const *)"Hello";
	list2 = ft_lstnew(str2, 5);
	ft_lstadd(&list, list1);
	ft_lstadd(&list, list2);
	ft_lstdisplay(list);
	return (0);
}
