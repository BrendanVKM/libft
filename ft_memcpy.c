/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvkm <bvkm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:41:27 by bvkm              #+#    #+#             */
/*   Updated: 2024/03/20 22:43:23 by bvkm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = dst;
	s = (char *)src;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
