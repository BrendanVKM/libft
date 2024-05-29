/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:40:23 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/29 10:09:53 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenn(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			len;

	len = lenn(n);
	nb = (long) n;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%s\n", ft_itoa(atoi(av[1])));
// 	}
// 	return (0);
// }
