/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:31:03 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/24 18:42:28 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplay(t_list *list)
{
	while (list->next != NULL)
	{
		ft_putendl((char *)list->content);
		list = list->next;
	}
	ft_putendl((char *)list->content);
}
