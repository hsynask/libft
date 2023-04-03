/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:50:27 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:49:27 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		len--;
		((unsigned char *)str)[i++] = (char)c;
	}
	return (str);
}
