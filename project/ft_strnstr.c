/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:21:15 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:48:31 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *find, size_t len)
{
	size_t	c;

	if (*find == '\0' || h == find)
		return ((char *)h);
	c = ft_strlen(find);
	while (*h != '\0' && c <= len--)
	{
		if ((ft_strncmp((char *)h, (char *)find, c)) == 0)
			return ((char *)h);
		h++;
	}
	return (0);
}
