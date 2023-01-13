/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nums_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:54:47 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/01 14:52:40 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_list(t_mylist **lst, int count, char **numbers)
{
	int		i;
	char	**tmp;

	while (count > 0)
	{
		tmp = ft_split(numbers[count], ' ');
		i = split_len(tmp);
		while (i >= 0)
		{
			ft_listadd_front(lst, ft_listnew(ft_atoi(tmp[i]), 0));
			i--;
		}
		count--;
	}
}

void	bubblesort(int	*arr, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	init_simp_nums(t_heads *heads)
{
	int			*arr;
	t_mylist	*tmp;
	int			i;

	tmp = heads->head_a;
	i = 0;
	arr = malloc(list_len(heads->head_a));
	while (tmp != NULL)
	{
		arr[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
	bubblesort(arr, i);
	tmp = heads->head_a;
	while (tmp != NULL)
	{
		tmp->simp_num = find_index(arr, tmp->num, i);
		tmp = tmp->next;
	}
	return (arr[i - 1]);
}
