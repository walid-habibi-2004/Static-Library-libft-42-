/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:04:03 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:32:01 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_digit(int n)
{
	int	cp;

	if (n == 0)
		return (1);
	cp = 0;
	if (n < 0)
		cp++;
	while (n != 0)
	{
		n /= 10;
		cp++;
	}
	return (cp);
}

static void	ft_fill_itoa(char *str, size_t size, int n)
{
	size_t	i;
	int		rest;

	i = size;
	if (n < 0)
	{
		while (i > 0)
		{
			rest = n % 10;
			n /= 10;
			str[--i] = (rest * (-1) + '0');
		}
		str[0] = '-';
	}
	else
	{
		while (i > 0)
		{
			rest = n % 10;
			n /= 10;
			str[--i] = rest + '0';
		}
	}
	str[size] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	size = ft_len_digit(n);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_fill_itoa(str, size, n);
	return (str);
}
