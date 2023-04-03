/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:20:27 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:50:02 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst != NULL)
	{
		tmp = lst;
		while (1)
		{
			f(tmp->content);
			tmp = tmp->next;
			if (tmp == NULL)
				return ;
		}
	}
}
