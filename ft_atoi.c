/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:39:24 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:23:56 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_white_space(const char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	result;

	i = 0;
	sig = 1;
	result = 0;
	while (ft_white_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sig *= -1;
	while (ft_isdigit(str[i]) && str[i])
		result = result * 10 + (str[i++] - '0');
	return (result * sig);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d | %d\n", ft_atoi(av[1]),atoi(av[1]));
// 		printf("%s\n", ft_atoi(av[1]) == atoi(av[1]) ? "OK" : "KO");
// 	}
// 	return (0);
// }
