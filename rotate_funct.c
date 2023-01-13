/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:14:58 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/07 17:12:28 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_mylist **lst)
{
	t_mylist	*tmp;

	ft_printf("ra\n");
	if (lst != NULL && *lst != NULL && (*lst)->next != NULL)
	{
		tmp = *lst;
		ft_listadd_back(lst, ft_listnew(tmp->num, tmp->simp_num));
		ft_list_rem(lst, "front");
	}
}

void	rotate_b(t_mylist **lst)
{
	t_mylist	*tmp;

	ft_printf("rb\n");
	if (lst != NULL && *lst != NULL && (*lst)->next != NULL)
	{
		tmp = *lst;
		ft_listadd_back(lst, ft_listnew(tmp->num, tmp->simp_num));
		ft_list_rem(lst, "front");
	}
}

void	rotate_both(t_mylist **a, t_mylist **b)
{
	rotate_a(a);
	rotate_b(b);
}
