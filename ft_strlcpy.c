/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:24:29 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/24 15:48:41 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	*ft_strlcpy(char *dst, const char *src, size_t size)
 {
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size )
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
 }

 int main()
 {
	#include <stdio.h>
	char s1[] = "";
	char s2[] = "teste";
	ft_strlcpy(s1, s2, 3);

	printf("%s", s1);
 }
