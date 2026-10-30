/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:15:02 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:33:45 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	ft_trim(char const *s1, char *str, size_t bg, size_t ls)
{
	int	i;

	i = 0;
	while (bg <= ls)
		str[i++] = s1[bg++];
	str[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	bg;
	size_t	ls;

	if (!s1 || !set)
		return (NULL);
	bg = 0;
	while (ft_check_set(set, s1[bg]))
		bg++;
	if (bg == ft_strlen(s1))
		return (ft_strdup(""));
	ls = ft_strlen(s1) - 1;
	while (ft_check_set(set, s1[ls]))
		ls--;
	str = malloc((ls - bg + 2) * sizeof(char));
	if (!str)
		return (NULL);
	ft_trim(s1, str, bg, ls);
	return (str);
}
