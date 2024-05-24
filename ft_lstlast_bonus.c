/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:41:02 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 21:24:36 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *lst;
// 	t_list *new;
// 	t_list *last;

// 	lst = ft_lstnew("first");
// 	new = ft_lstnew("second");
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew("third");
// 	ft_lstadd_back(&lst, new);
// 	new = ft_lstnew("fourth");
// 	ft_lstadd_back(&lst, new);
// 	last = ft_lstlast(lst);
// 	printf("last->content = %s\n", (char *)last->content);
// 	return (0);
// }