/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:55:06 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 22:46:47 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!dst || !src)
		return (NULL);
	if (s < d)
		while (len-- > 0){
			d[len] = s[len];
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%s | %s\n", (char*)ft_memmove(av[1], av[2], ft_strlen(av[1])), (char*)memmove(av[1], av[2], ft_strlen(av[1])));
// 	printf("%s\n", ft_memmove(av[1], av[2], ft_strlen(av[1])) == memmove(av[1], av[2], ft_strlen(av[1])) ? "OK" : "KO");
// 	return (0);
// }