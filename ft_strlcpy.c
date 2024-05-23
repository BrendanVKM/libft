/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:42:59 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/23 14:15:28 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (src[i] && i < len - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		char *src = ft_strdup(av[1]);
// 		char *dst_1 = ft_strdup(av[2]);
// 		char *dst_2 = ft_strdup(av[2]);

// 		size_t len = atoi(av[3]);
// 		printf("%zu | %zu\n", ft_strlcpy(dst_1, src, len), strlcpy(dst_2, src,
// 				len));
// 		printf("%s | %s\n", dst_1, dst_2);
// 		printf("%s\n", ft_strncmp(dst_1, dst_2, len) == 0 ? "OK" : "KO");
// 	}
// 	return (0);
// }