/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:12:28 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/05/30 15:57:56 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_mylist **lst)
{
	int	tmp;
	int	tmp2;
	int	tmp_simp;
	int	tmp2_simp;

	ft_printf("sa\n");
	if (lst != NULL && *lst != NULL && (*lst)->next != NULL)
	{
		tmp = (*lst)->num;
		tmp_simp = (*lst)->simp_num;
		tmp2 = ((*lst)->next)->num;
		tmp2_simp = (*lst)->next->simp_num;
		ft_list_rem(lst, "front");
		ft_list_rem(lst, "front");
		ft_listadd_front(lst, ft_listnew(tmp, tmp_simp));
		ft_listadd_front(lst, ft_listnew(tmp2, tmp2_simp));
	}
}

void	swap_b(t_mylist **lst)
{
	int	tmp;
	int	tmp2;
	int	tmp_simp;
	int	tmp2_simp;

	ft_printf("sb\n");
	if (lst != NULL && *lst != NULL && (*lst)->next != NULL)
	{
		tmp = (*lst)->num;
		tmp_simp = (*lst)->simp_num;
		tmp2 = ((*lst)->next)->num;
		tmp2_simp = (*lst)->next->simp_num;
		ft_list_rem(lst, "front");
		ft_list_rem(lst, "front");
		ft_listadd_front(lst, ft_listnew(tmp, tmp_simp));
		ft_listadd_front(lst, ft_listnew(tmp2, tmp2_simp));
	}
}

void	swap_both(t_mylist **a, t_mylist **b)
{
	swap_a(a);
	swap_b(b);
}
