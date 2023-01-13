/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:21:01 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/07 17:06:56 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_errors_and_init(char **numbers, int count, t_heads *heads)
{
	if (count == 0)
	{
		ft_putstr_fd("No parameters were specified\n", 1);
		exit(0);
	}
	check_if_num(numbers, count);
	init_list(&heads->head_a, count, numbers);
	check_dup(heads->head_a);
}

void	put_error_exit(char *str)
{
	ft_putstr_fd(str, 2);
	exit(2);
}

void	check_dup(t_mylist *list)
{
	t_mylist	*tmp1;
	t_mylist	*tmp2;

	tmp1 = list;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1->next;
		while (tmp2 != NULL)
		{
			if (tmp1->num == tmp2->num)
				put_error_exit("Error\n");
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

void	check_if_num(char **numbers, int count)
{
	int		i;
	int		j;
	char	**tmp;

	while (count > 0)
	{
		i = 0;
		tmp = ft_split(numbers[count], ' ');
		if (tmp[0] == NULL)
			put_error_exit("Error\n");
		while (tmp[i] != NULL)
		{
			j = 0;
			if (tmp[i][j] == '-')
				j++;
			while (tmp[i][j] != '\0')
			{
				if (!ft_isdigit(tmp[i][j]))
					put_error_exit("Error\n");
				j++;
			}
			i++;
		}
		count--;
	}
}
