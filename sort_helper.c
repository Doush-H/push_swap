/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:50:40 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/01 16:51:39 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_mylist *head)
{
	t_mylist	*tmp;

	tmp = head;
	while (tmp != NULL && tmp->next != NULL && tmp->num < tmp->next->num)
		tmp = tmp->next;
	if (tmp != NULL && tmp->next == NULL)
		return (1);
	return (0);
}

int	get_max_dig(int num)
{
	int	i;

	i = 0;
	while ((num >> i) != 0)
		i++;
	return (i);
}

int	find_min(t_heads *heads)
{
	int			min;
	t_mylist	*tmp;
	int			i;
	int			j;

	tmp = heads->head_a;
	min = tmp->num;
	i = 0;
	j = 0;
	while (tmp != NULL)
	{
		if (tmp->num < min)
		{
			min = tmp->num;
			j = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (j);
}
