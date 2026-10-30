/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:18:20 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:35:39 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	src;

	str = (unsigned char *)s;
	src = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == src)
			return (&str[i]);
		i++;
	}
	return (0);
}
