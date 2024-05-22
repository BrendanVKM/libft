/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:41:18 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 22:30:55 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)ptr;
	while (len--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%s | %s\n", (char*)ft_memchr(av[1], av[2][0], ft_strlen(av[1])), (char*)memchr(av[1], av[2][0], ft_strlen(av[1])));
// 	printf("%s\n", ft_memchr(av[1], av[2][0], ft_strlen(av[1])) == memchr(av[1], av[2][0], ft_strlen(av[1])) ? "OK" : "KO");
// 	return (0);
// }