/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:32:05 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/26 16:19:21 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] < str2[i])
				return (-1);
			else if (str1[i] > str2[i])
				return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	int s1[] = {1, 2, 3, 4, 5};
	int s2[] = {6, 3, 8, 9, 10};
	char *st1 = "hello";
	char *st2 = "world";
	printf("%i", ft_memcmp(&s1[3], &s2[1], 10));
}
