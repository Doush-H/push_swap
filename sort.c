/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:37:34 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/02 04:12:10 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//-----------------Radix Sort-----------------------
void	sort_big_stack(t_heads *heads)
{
	int	max_num;
	int	max_bits;
	int	size;
	int	i;
	int	j;

	max_num = init_simp_nums(heads);
	max_bits = get_max_dig(max_num);
	i = 0;
	size = list_len(heads->head_a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size && !is_sorted(heads->head_a))
		{
			if (((heads->head_a->simp_num >> i) & 1) == 1)
				rotate_a(&heads->head_a);
			else
				push_b(&heads->head_a, &heads->head_b);
			j++;
		}
		while (heads->head_b != NULL)
			push_a(&heads->head_a, &heads->head_b);
		i++;
	}
}

void	sort_three(t_mylist *a)
{
	if (a->num > a->next->num && a->num > a->next->next->num)
		rotate_a(&a);
	if (a->next->num > a->num && a->next->num > a->next->next->num)
		r_rotate_a(&a);
	if (a->num > a->next->num)
		swap_a(&a);
}

void	sort_five(t_heads *heads)
{
	int	i;

	while (!is_sorted(heads->head_a))
	{
		i = find_min(heads);
		if (list_len(heads->head_a) == 3)
		{
			sort_three(heads->head_a);
			break ;
		}
		if (i > list_len(heads->head_a) / 2)
		{
			while (find_min(heads) != 0)
				r_rotate_a(&heads->head_a);
		}
		else
		{
			while (find_min(heads) != 0)
				rotate_a(&heads->head_a);
		}
		if (!is_sorted(heads->head_a))
			push_b(&heads->head_a, &heads->head_b);
	}
	while (heads->head_b != NULL)
		push_a(&heads->head_a, &heads->head_b);
}

void	sort_small_stack(t_heads *heads)
{
	if (list_len(heads->head_a) == 2
		&& heads->head_a->num > heads->head_a->next->num)
		swap_a(&heads->head_a);
	else
		sort_five(heads);
}

void	sort(t_heads *heads)
{
	if (list_len(heads->head_a) > 50)
		sort_big_stack(heads);
	else
		sort_small_stack(heads);
}
