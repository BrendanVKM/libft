/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:41:27 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/23 14:22:22 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	if (!dst && !src)
		return (NULL);
	d = dst;
	s = (char *)src;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%s | %s\n", (char*)ft_memcpy(av[1], av[2], ft_strlen(av[1])),
//		(char*)memcpy(av[1], av[2], ft_strlen(av[1])));
// 	printf("%s\n", ft_memcpy(av[1], av[2], ft_strlen(av[1])) == memcpy(av[1],
//			av[2], ft_strlen(av[1])) ? "OK" : "KO");
// 	return (0);
// }