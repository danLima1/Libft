/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:54:32 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/24 16:01:07 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 size_t ft_strlcat(char *dst, const char *src, size_t size)
 {
		int i;
		int j;

		i = 0;
		j = 0;

		while (dst[i] != '\0')
			i++;
		while(src[j] != '\0' && j < size)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
 }

int main()
{
	char s1[] = "hello";
	char s2[] = " world";
	ft_strlcat(s1, s2, 4);
	printf("%s",s1);
}
