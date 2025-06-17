/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkorpela <kkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:51:38 by kkorpela          #+#    #+#             */
/*   Updated: 2025/04/25 09:53:06 by kkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		c1 = (unsigned char)str1[i];
		c2 = (unsigned char)str2[i];
		if (c1 != c2)
			return (c1 - c2);
		if (c1 == '\0')
			break ;
		i++;
	}
	return (0);
}
