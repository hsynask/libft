/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:35:28 by hasik             #+#    #+#             */
/*   Updated: 2023/04/03 23:48:55 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dizi;
	size_t	len;
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	dizi = malloc(sizeof(char) * len + 1);
	if (!dizi)
		return (0);
	while (i < len)
	{
		if (i < ft_strlen(s1))
			dizi[i] = s1[i];
		else
			dizi[i] = s2[a++];
		i++;
	}
	dizi[i] = '\0';
	return (dizi);
}
