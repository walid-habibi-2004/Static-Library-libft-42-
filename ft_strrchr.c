/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:09:12 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:33:42 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	i = ft_strlen(s);
	while (i > 0)
	{
		i--;
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
	}
	return (0);
}
