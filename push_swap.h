/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaami <cmaami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:25:23 by cmaami            #+#    #+#             */
/*   Updated: 2024/01/22 10:19:39 by cmaami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct t_list
{
	long			nb;
	struct t_list	*next;
}					t_list;

int					closest_smaller(t_list *b, int n);
int					max_(t_list *head);
int					min_(t_list *head);
int					closest_smaller_or_max(t_list *b, int n);
int					move_count(t_list *stack_a, int target);
int					min(int a, int b);
int					max(int a, int b);
int					ab(int a);
int					n_move_ab(int a, int b);
int					min_move(t_list *a, t_list *b);
void				to_the_top(t_list **a, int len_a, t_list **b, int len_b);
void				vers_haut_stack_a(t_list **a, int len_a);
void				push_back(t_list **a, t_list **b);
int					check_sort(t_list *stack_a);
void				push_2(t_list **stack_a, t_list **stack_b);
void				sort_sup_three(t_list **stack_a, t_list **stack_b);
void				push_swap(t_list **stack_a, t_list **stack_b);
t_list				*get_args(int c, char **v);
t_list				*ft_lstnew(long content);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
void				sort3(t_list **x);
int					closest_bigger(t_list *b, int n);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
long				ft_atoi(char *str);
void				rotate(t_list **l);
void				ft_ra(t_list **a, int n);
void				ft_rb(t_list **b, int n);
void				ft_rr(t_list **a, t_list **b, int n);
void				swap(t_list **l, char c);
void				reverse_rotate(t_list **l);
int					index_(t_list *a, int c);
void				ft_rra(t_list **a, int n);
void				ft_rrb(t_list **b, int n);
void				ft_rrr(t_list **a, t_list **b, int n);
void				push(t_list **a, t_list **b, char c);
int					check_sort(t_list *stack_a);
char				**ft_split(char const *s, char c);
int					check_double(t_list *stack_a);
void				ft_free(t_list **lst);
int					ft_isdigit(int c);
int					check_alpha(char *v);
int					check_is_int(long content);
size_t				ft_strlen(const char *s);
void				rrr_rra_rrb(t_list **a, int len_a, t_list **b, int len_b);
void				free__(char **t);
void				rrrab(t_list **stack_a, t_list **stack_b);
void				rrab(t_list **stack_a, t_list **stack_b);
size_t				ft_strlen_0(const char *s);
size_t				ft_strlcat(char *dst, char *src, size_t dstsize);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strdup(const char *s1);
char				*ft_strchr(char *s, int c);
char				*get_next_line(int fd);
void				ft_error_(void);
int					ft_strcmp(char *s1, char *s2);
#endif