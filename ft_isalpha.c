/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:39:53 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:44:15 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int	main(int ac,char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d | %d\n", ft_isalpha(av[1][0]), isalpha(av[1][0]));
// 		printf("%s\n", ft_isalpha(av[1][0]) == isalpha(av[1][0]) ? "OK" : "KO");
// 	}
// 	return (0);
// }