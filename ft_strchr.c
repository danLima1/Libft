/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:40:36 by dde-lima          #+#    #+#             */
/*   Updated: 2024/10/01 18:25:27 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cs;

	cs = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (*cs == c)
			return (cs);
		i--;
		cs++;
	}
	return (0);
}
