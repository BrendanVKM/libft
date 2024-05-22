/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:39:43 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:42:18 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size )
{
	const size_t	total_size = nmemb * size;
	void			*ptr;

	ptr = NULL;
	if (!total_size || nmemb <= SIZE_MAX / size)
		ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;

// 	str = (char *)ft_calloc(10, sizeof(char));
// 	printf("%s\n", str);
// 	return (0);
// }