/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:39:18 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/26 15:08:43 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dest;
	unsigned int i;

	dest = (char *)malloc(sizeof (char) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return dest;
}

char ft_teste(unsigned int i, char c)
{

	if(c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return c;
}


int main()
{

	char *str = "teste";
	printf("%s",ft_strmapi(str, ft_teste));
}
