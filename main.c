/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:29:45 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/02 05:03:44 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_heads		heads;

	heads.head_a = NULL;
	heads.head_b = NULL;
	check_errors_and_init(argv, argc - 1, &heads);
	sort(&heads);
	return (1);
}
