/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:14:24 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:33:16 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static int	ft_split_free(char **str, size_t j)
{
	while (j > 0)
		free(str[--j]);
	return (0);
}

static int	ft_split_allocation(char **str, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		len = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		str[j] = malloc((len + 1) * sizeof(char));
		if (!str[j])
			return (ft_split_free(str, j));
		j++;
	}
	return (1);
}

static void	ft_spliter(char	**str, char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		k = 0;
		while (start < i)
			str[j][k++] = s[start++];
		str[j][k++] = '\0';
		j++;
	}
	str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	str = malloc((words + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	if (!ft_split_allocation(str, s, c))
	{
		free(str);
		return (NULL);
	}
	ft_spliter(str, s, c);
	return (str);
}
