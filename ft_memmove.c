/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:10:18 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/27 15:05:36 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*csrc;
	unsigned int	len;

	len = 0;
	dst = (unsigned char *)dest;
	csrc = (unsigned char *)src;

	if (src < dest)
	{
		len = n;
		while(len > 0)
		{
			len--;
			dst[len] = csrc[len];
		}
	}
	else
	{
		len = 0;
		while(len < n)
		{
			dst[len] = csrc[len];
			len++;
		}
	}
	return(dst);
}

int main()
{
	char *s1 = "hello";
	char *s2 = "worlds";
	char *s;
	s = ft_memmove(s1, s2, 8);
	printf("%s", s);
}
