/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>                    +#+  +:+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:57:39 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/16 21:56:37 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_long(int s)
{
	if (s == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long	r;
	int		i;
	int		s;
	char	*str;

	str = (char *)nptr;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	s = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (r > (LONG_MAX - (str[i] - '0')) / 10)
			return (ft_check_long(s));
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return ((int)r * s);
}
