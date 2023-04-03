/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:13:24 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:48:35 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 1;
	if (!n)
		return (0);
	while (*str1 == *str2 && i++ < n && *str1 && *str2 != '\0')
	{
		str1++;
		str2++;
	}
	return ((unsigned char )*str1 - (unsigned char )*str2);
}
