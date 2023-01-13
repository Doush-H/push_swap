/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_funct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:01:44 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/05/30 15:59:10 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_a(t_mylist **lst)
{
	t_mylist	*tmp;

	ft_printf("rra\n");
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

	ft_printf("rrb\n");
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
