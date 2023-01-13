/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funct_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:08:46 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/07 17:15:48 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push_a(t_mylist **a, t_mylist **b)
{
	if (b != NULL && *b != NULL)
	{
		ft_listadd_front(a, ft_listnew((*b)->num, (*b)->simp_num));
		ft_list_rem(b, "front");
	}
}

void	push_b(t_mylist **a, t_mylist **b)
{
	if (a != NULL && *a != NULL)
	{
		ft_listadd_front(b, ft_listnew((*a)->num, (*a)->simp_num));
		ft_list_rem(a, "front");
	}
}
