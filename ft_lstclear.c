/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wahabibi <wahabibi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:03:29 by wahabibi          #+#    #+#             */
/*   Updated: 2026/10/30 17:32:24 by wahabibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*one;
	t_list	*next_one;

	if (!lst)
		return ;
	one = *lst;
	while (one != NULL)
	{
		next_one = one->next;
		ft_lstdelone(one, del);
		one = next_one;
	}
	*lst = NULL;
}
