/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:39:58 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:43:53 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d | %d\n", ft_isascii(av[1][0]), isascii(av[1][0]));
// 		printf("%s\n", ft_isascii(av[1][0]) == isascii(av[1][0]) ? "OK" : "KO");
// 	}
// 	return (0);
// }