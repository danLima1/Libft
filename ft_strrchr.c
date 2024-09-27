/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:53:19 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/27 13:22:42 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cs;
	int		length;

	length = ft_strlen(s);
	cs = (char *)s;
	while (length > 0)
	{
		if (cs[length] == c)
		{
			return (&cs[length]);
		}
		length--;
	}
	return (NULL);
}
