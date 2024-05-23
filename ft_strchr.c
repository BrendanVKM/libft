/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:42:12 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/23 14:31:56 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(&str[i]));
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(&str[i]));
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("%s | %s\n", ft_strchr(av[1], av[2][0]), strchr(av[1],
//				av[2][0]));
// 		printf("%s\n", ft_strchr(av[1], av[2][0]) == strchr(av[1],
//				av[2][0]) ? "OK" : "KO");
// 	}
// 	return (0);
// }