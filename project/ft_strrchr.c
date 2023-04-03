/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:11:20 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:48:26 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = (char *)s;
	while (*s != '\0')
		s++;
	while (s >= start)
	{
		if (*((char *)s) == (char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}
