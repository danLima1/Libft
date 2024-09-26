/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:02:28 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/26 19:15:55 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *cs;

	cs = (const unsigned char *)s;
	while ( n > 0)
	{
		if(*cs == (unsigned char)c)
			return ((void *)cs);
		n--;
		s++;
	}
	return (NULL);
}

int main()
{
	char *s ="teste";
	printf("%s", (char *)ft_memchr(s, 'e', 5));
}
