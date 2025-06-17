/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkorpela <kkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:24:39 by kkorpela          #+#    #+#             */
/*   Updated: 2025/04/18 22:04:40 by kkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*str_1;

	str_1 = (unsigned char *)str;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str_1[i] == c1)
			return (&str_1[i]);
		i++;
	}
	return (NULL);
}
