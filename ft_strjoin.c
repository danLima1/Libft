/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:11:58 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/26 18:36:15 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	i = -1;
	j = -1;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[++i] != '\0')
		dst[i] = s1[i];
	while (s2[++j] != '\0')
		dst[i++] = s2[j];
	dst[i] = '\0';
	return (dst);
}

int main()
{
	char *s1 = "hello";
	char *s2 = " world";

	printf("%s", ft_strjoin(s1, s2));
}
