/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:43:56 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/23 14:15:44 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%d | %d\n", ft_strncmp(av[1], av[2], atoi(av[3])),
//			strncmp(av[1], av[2], atoi(av[3])));
// 		printf("%s\n", ft_strncmp(av[1], av[2],
//				atoi(av[3])) == 0 ? "OK" : "KO");
// 	}
// 	return (0);
// }