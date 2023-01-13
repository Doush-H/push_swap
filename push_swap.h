/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhamdiev <dhamdiev@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:35:21 by dhamdiev          #+#    #+#             */
/*   Updated: 2022/06/07 17:09:50 by dhamdiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"

typedef struct s_mylist
{
	int				num;
	int				simp_num;
	struct s_mylist	*next;
	struct s_mylist	*prev;
}				t_mylist;

typedef struct s_heads
{
	t_mylist	*head_a;
	t_mylist	*head_b;
}				t_heads;

//------------------CHECKS-----------------------
void		check_if_num(char **strings, int count);
void		check_errors_and_init(char **numbers, int count, t_heads *heads);
void		check_dup(t_mylist *list);

//------------PUSH_SWAP_COMMANDS-----------------
void		swap_a(t_mylist **lst);
void		swap_b(t_mylist **lst);
void		swap_both(t_mylist **a, t_mylist **b);
void		push_a(t_mylist **a, t_mylist **b);
void		push_b(t_mylist **a, t_mylist **b);
void		rotate_a(t_mylist **lst);
void		rotate_b(t_mylist **lst);
void		rotate_both(t_mylist **a, t_mylist **b);
void		r_rotate_a(t_mylist **lst);
void		r_rotate_b(t_mylist **lst);
void		r_rotate_both(t_mylist **a, t_mylist **b);

//-------------LIST_FUNCTIONS---------------------
void		ft_listadd_front(t_mylist **lst, t_mylist *new);
t_mylist	*ft_listlast(t_mylist *lst);
void		ft_listadd_back(t_mylist **lst, t_mylist *new);
t_mylist	*ft_listnew(int content, int simp_num);
void		print_list(t_mylist **list_a, t_mylist **list_b);
void		ft_list_rem(t_mylist **lst, char *str);
void		init_list(t_mylist **list, int count, char **numbers);
int			list_len(t_mylist *lst);
int			is_sorted(t_mylist *head);
int			init_simp_nums(t_heads *heads);

//--------------------SORTS----------------------
void		sort_three(t_mylist *a);
void		bubblesort(int	*arr, int len);
void		sort(t_heads *heads);
int			get_max_dig(int num);
int			find_min(t_heads *heads);

//-------------------UTILS----------------------
int			find_index(int *arr, int num, int size);
int			split_len(char **str);
int			split_len(char **str);
void		put_error_exit(char *str);

#endif