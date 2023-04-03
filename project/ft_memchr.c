/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:15:37 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:49:45 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
