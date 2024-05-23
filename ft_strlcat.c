/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:42:55 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/23 11:04:38 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = dst_len;
	if (dst_len < len - 1 && len > 0)
	{
		while (src[i] && dst_len + i < len - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dst_len >= len)
		dst_len = len;
	return (dst_len + src_len);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		char *src = ft_strdup(av[1]);
// 		char *dst_1 = ft_strdup(av[2]);
// 		char *dst_2 = ft_strdup(av[2]);

// 		size_t len = atoi(av[3]);
// 		printf("%zu | %zu\n", ft_strlcat(dst_1, src, len), strlcat(dst_2, src, len));
// 		printf("%s | %s\n", dst_1, dst_2);
// 		printf("%s\n", ft_strncmp(dst_1, dst_2, len) == 0 ? "OK" : "KO");
// 	}
// 	return (0);
// }