/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkorpela <kkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:44:55 by kkorpela          #+#    #+#             */
/*   Updated: 2025/04/29 12:48:10 by kkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	*str_1;
	size_t			i;

	i = 0;
	c1 = (unsigned char)c;
	str_1 = (unsigned char *)str;
	while (i < n)
	{
		str_1[i] = c1;
		i++;
	}
	return (str);
}
