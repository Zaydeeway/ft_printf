/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:16:49 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/11/21 20:16:49 by zait-hmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (*str)
	{
		if (*str != c && i == 0)
		{
			i = 1;
			nbr++;
		}
		else if (*str == c)
			i = 0;
		str++;
	}
	return (nbr);
}

static void	*ft_free(char **strs, int word)
{
	int	i;

	i = 0;
	while (i < word)
	{
		free (strs[i]);
		i++;
	}
	free (strs);
	return (0);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;
	int		total;

	i = 0;
	total = end - start + 1;
	word = malloc(total * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_reset(size_t *i, int *j, int *ourword)
{
	*i = 0;
	*j = 0;
	*ourword = -1;
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	size_t	i;
	int		j;
	int		ourword;

	ft_reset(&i, &j, &ourword);
	ptr = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!ptr)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && ourword < 0)
			ourword = i;
		else if ((s[i] == c || i == ft_strlen(s)) && ourword >= 0)
		{
			ptr[j] = fill_word(s, ourword, i);
			if (!ptr[j])
				return (ft_free(ptr, j));
			ourword = -1;
			j++;
		}
		i++;
	}
	return (ptr);
}
