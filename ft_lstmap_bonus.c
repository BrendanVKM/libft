/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:41:05 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/24 11:56:17 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_iter(t_list *lst, void *(*f)(void *),
		void (*del)(void *), t_list *head)
{
	t_list	*new_elem;
	t_list	*tmp;
	void	*content;

	tmp = head;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			del(content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		tmp->next = new_elem;
		tmp = new_elem;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	head = ft_lstnew(content);
	if (!head)
	{
		del(content);
		return (NULL);
	}
	lst = lst->next;
	return (ft_lstmap_iter(lst, f, del, head));
}
