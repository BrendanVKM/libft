/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:41:12 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 21:10:20 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		t_list	*new;

// 		new = ft_lstnew(av[1]);
// 		if (new)
// 		{
// 			printf("new->content: %s\n", (char *)new->content);
// 			printf("new->next: %p\n", new->next);
// 		}
// 	}
// 	return (0);
// }