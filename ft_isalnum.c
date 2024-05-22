/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:39:48 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:43:08 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d | %d\n", ft_isalnum(av[1][0]), isalnum(av[1][0]));
// 		printf("%s\n", ft_isalnum(av[1][0]) == isalnum(av[1][0]) ? "OK" : "KO");
// 	}
// 	return (0);
// }