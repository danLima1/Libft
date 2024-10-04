/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:41:06 by dde-lima          #+#    #+#             */
/*   Updated: 2024/10/04 13:23:46 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int	j;

	i = 0;
	j = 0;
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i < len)
			{
				if (little[j + 1] == '\0')
				{
					return ((char *)(big + i));
				}
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char s1[] = "eduardo teste";
// 	char s2[]= "r";
// 	printf("%s", ft_strnstr(s1, s2, 10));
// }
