/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:00:46 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/24 15:13:32 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (-1);
			}
			else if (s1[i] > s2[i])
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

/*int main()
{
	#include <stdio.h>
	char s1[] = "hello";
	char s2[] = "world";

	printf("%i", ft_strncmp(s1, s2, 10));
}*/
