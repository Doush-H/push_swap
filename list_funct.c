/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:13:43 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/02 04:59:54 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_listadd_back(t_mylist **lst, t_mylist *new_lst)
{
	t_mylist	*tmp;

	tmp = NULL;
	if (*lst != NULL)
	{
		tmp = ft_listlast(*lst);
		new_lst->prev = tmp;
		tmp->next = new_lst;
	}
	else
	{
		*lst = new_lst;
		new_lst->prev = NULL;
	}
}

void	ft_listadd_front(t_mylist **lst, t_mylist *new_lst)
{
	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			new_lst->next = *lst;
			(*lst)->prev = new_lst;
			*lst = new_lst;
			(*lst)->prev = NULL;
		}
		else
		{
			*lst = new_lst;
			new_lst->prev = NULL;
		}
	}
}

void	ft_list_rem(t_mylist **lst, char *str)
{
	t_mylist	*tmp;

	if (ft_strncmp(str, "front", ft_strlen(str)) == 0)
	{
		if (lst != NULL && *lst != NULL)
		{
			tmp = *lst;
			*lst = (*lst)->next;
			if (*lst != NULL)
				(*lst)->prev = NULL;
			free(tmp);
		}
	}
	else
	{
		if (lst != NULL && *lst != NULL)
		{
			tmp = ft_listlast(*lst);
			free(ft_listlast(*lst));
			tmp = tmp->prev;
			tmp->next = NULL;
		}
	}
}

t_mylist	*ft_listlast(t_mylist *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

t_mylist	*ft_listnew(int content, int simp_num)
{
	t_mylist	*node;

	node = malloc(sizeof(t_mylist) * 1);
	if (node == NULL)
		return (NULL);
	node->num = content;
	node->simp_num = simp_num;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

// DEBUG FUNCTION
// void	print_list(t_mylist **list_a, t_mylist **list_b)
// {
// 	int	i;

// 	i = 0;
// 	ft_printf("INDEX\t\tA\tSimpA\t\tB\tSimpB\n");
// 	while (*list_a != NULL)
// 	{
// 		ft_printf("%d\t\t", i);
// 		if (*list_a != NULL)
// 		{
// 			ft_printf("%d\t%d\t\t", (*list_a)->num, (*list_a)->simp_num);
// 			*list_a = (*list_a)->next;
// 		}
// 		if (*list_b != NULL)
// 		{
// 			ft_printf("%d\t%d", (*list_b)->num, (*list_b)->simp_num);
// 			*list_b = (*list_b)->next;
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	while (*list_b != NULL)
// 	{
// 		ft_printf("%d \t\t \t \t\t%d\t%d\n", i, (*list_b)->num,
//			(*list_b)->simp_num);
// 		i++;
// 		*list_b = (*list_b)->next;
// 	}
// }
