/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:40:12 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:44:05 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d | %d\n", ft_isdigit(av[1][0]), isdigit(av[1][0]));
// 		printf("%s\n", ft_isdigit(av[1][0]) == isdigit(av[1][0]) ? "OK" : "KO");
// 	}
// 	return (0);
// }