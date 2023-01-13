/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 04:29:31 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/07 17:09:59 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdint.h>

void	exec_command(char *comm, t_heads *heads)
{
	if (!ft_strncmp(comm, "pa\n", 3))
		push_a(&heads->head_a, &heads->head_b);
	else if (!ft_strncmp(comm, "pb\n", 3))
		push_b(&heads->head_a, &heads->head_b);
	else if (!ft_strncmp(comm, "sa\n", 3))
		swap_a(&heads->head_a);
	else if (!ft_strncmp(comm, "sb\n", 3))
		swap_b(&heads->head_b);
	else if (!ft_strncmp(comm, "ss\n", 3))
		swap_both(&heads->head_a, &heads->head_b);
	else if (!ft_strncmp(comm, "ra\n", 3))
		rotate_a(&heads->head_a);
	else if (!ft_strncmp(comm, "rb\n", 3))
		rotate_b(&heads->head_b);
	else if (!ft_strncmp(comm, "rr\n", 3))
		rotate_both(&heads->head_a, &heads->head_b);
	else if (!ft_strncmp(comm, "rra\n", 4))
		r_rotate_a(&heads->head_a);
	else if (!ft_strncmp(comm, "rrb\n", 4))
		r_rotate_b(&heads->head_b);
	else if (!ft_strncmp(comm, "rrr\n", 4))
		r_rotate_both(&heads->head_a, &heads->head_b);
	else
		put_error_exit("Error\n");
}

int	main(int argc, char **argv)
{
	t_heads		heads;
	char		*str;

	heads.head_a = NULL;
	heads.head_b = NULL;
	check_errors_and_init(argv, argc - 1, &heads);
	str = "";
	while (str != NULL && ft_strncmp(str, "\n", 1))
	{
		str = get_next_line(0);
		if (str != NULL)
			exec_command(str, &heads);
	}
	if (is_sorted(heads.head_a) && heads.head_b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (0);
}
