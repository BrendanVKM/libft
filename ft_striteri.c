/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:56:09 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/29 10:09:11 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_putchar_(unsigned int i, char *c)
// {
// 	printf("%d: %c\n", i, *c);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		ft_striteri(av[1], ft_putchar_);
// 	}
// 	return (0);
// }
