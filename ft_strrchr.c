/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkorpela <kkorpela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:31:18 by kkorpela          #+#    #+#             */
/*   Updated: 2025/04/25 09:59:55 by kkorpela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		last_pos;
	char	ch;

	ch = (char)c;
	i = 0;
	last_pos = -1;
	while (str[i])
	{
		if (str[i] == ch)
			last_pos = i;
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	if (last_pos != -1)
		return ((char *)&str[last_pos]);
	return (NULL);
}
