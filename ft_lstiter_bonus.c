/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:40:59 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 21:58:57 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	uppercase(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	while (*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 			*str -= 32;
// 		str++;
// 	}
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;
// 	t_list	*new2;
// 	t_list	*new3;
// 	t_list	*new4;
// 	t_list	*new5;

// 	lst = ft_lstnew(ft_strdup("hello"));
// 	new = ft_lstnew(ft_strdup("world"));
// 	new2 = ft_lstnew(ft_strdup("bonjour"));
// 	new3 = ft_lstnew(ft_strdup("monde"));
// 	new4 = ft_lstnew(ft_strdup("hola"));
// 	new5 = ft_lstnew(ft_strdup("mundo"));
// 	ft_lstadd_back(&lst, new);
// 	ft_lstadd_back(&lst, new2);
// 	ft_lstadd_back(&lst, new3);
// 	ft_lstadd_back(&lst, new4);
// 	ft_lstadd_back(&lst, new5);
// 	ft_lstiter(lst, uppercase);
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }