/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:41:34 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/23 14:14:04 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*str;

	str = (char *)ptr;
	while (count--)
	{
		*str = (unsigned char)value;
		str++;
	}
	return (ptr);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%s | %s\n", (char*)ft_memset(av[1], av[2][0], ft_strlen(av[1])),
//		(char*)memset(av[1], av[2][0], ft_strlen(av[1])));
// 	printf("%s\n", ft_memset(av[1], av[2][0], ft_strlen(av[1])) == memset(av[1],
//			av[2][0], ft_strlen(av[1])) ? "OK" : "KO");
// 	return (0);
// }