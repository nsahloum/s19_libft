/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:10:52 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/09 11:19:25 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	k;
	char	*s_cpy;

	s_cpy = (char *)s;
	i = 0;
	k = ft_strlen(s_cpy);
	if (c == 0)
	{
		return (&s_cpy[k]);
	}
	while (s_cpy[i])
	{
		if (s_cpy[i] == c)
		{
			return (&s_cpy[i]);
		}
		i++;
	}
	return (0);
}
