/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_funct_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:01:44 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/07 17:15:51 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	r_rotate_a(t_mylist **lst)
{
	t_mylist	*tmp;

	if (lst != NULL && *lst != NULL && (*lst)->next != NULL)
	{
		tmp = ft_listlast(*lst);
		ft_listadd_front(lst, ft_listnew(tmp->num, tmp->simp_num));
		ft_list_rem(lst, "back");
	}
}

void	r_rotate_b(t_mylist **lst)
{
	t_mylist	*tmp;

	if (lst != NULL && *lst != NULL && (*lst)->next != NULL)
	{
		tmp = ft_listlast(*lst);
		ft_listadd_front(lst, ft_listnew(tmp->num, tmp->simp_num));
		ft_list_rem(lst, "back");
	}
}

void	r_rotate_both(t_mylist **a, t_mylist **b)
{
	r_rotate_a(a);
	r_rotate_b(b);
}
