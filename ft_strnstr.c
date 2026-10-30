/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:46:57 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:33:40 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	j;
	char	*str;

	str = (char *)big;
	i = 0;
	k = 0;
	if (little[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		k = i;
		j = 0;
		while (k < len && str[k] == little[j] && little[j])
		{
			k++;
			j++;
		}
		if (little[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
