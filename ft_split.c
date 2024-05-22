/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:56:38 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 10:39:15 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *src, int s, int e)
{
	char	*dest;

	dest = malloc(sizeof(char) * (e - s + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, &src[s], e - s + 1);
	dest[e - s] = '\0';
	return (dest);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	int		word;
	char	**strs;

	i = 0;
	word = 0;
	strs = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!strs)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		j = i;
		while (str[j] && str[j] != c)
			j++;
		if (j != i)
		{
			strs[word++] = ft_strndup(str, i, j);
		}
		i = j;
	}
	strs[word] = NULL;
	return (strs);
}
