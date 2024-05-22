/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:40:18 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:44:35 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d | %d\n", ft_isprint(av[1][0]), isprint(av[1][0]));
// 		printf("%s\n", ft_isprint(av[1][0]) == isprint(av[1][0]) ? "OK" : "KO");
// 	}
// 	return (0);
// }