/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:36:28 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/31 09:51:47 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	len_d = 0;
	while (len_d < size && dest[len_d])
		len_d++;
	len_s = ft_strlen(src);
	if (size == len_d)
		return (len_s + size);
	i = 0;
	while (src[i] && len_d + i < size - 1)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
