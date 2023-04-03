/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:14:56 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:50:21 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	last_elem = ft_lstlast(*lst);
	last_elem->next = new;
}
