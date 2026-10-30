/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:19:43 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:33:18 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	src;

	str = (char *)s;
	src = (char)c;
	i = 0;
	while (str[i] != src)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}
