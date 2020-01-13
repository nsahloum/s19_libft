/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:33:25 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/13 14:10:21 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lenght(char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = malloc((sizeof(char) * ft_lenght(src)) + 1)))
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}