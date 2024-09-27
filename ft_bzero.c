/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:21:51 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/27 13:23:08 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*str;
	size_t		i;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int main()
{
	#include <stdio.h>
	char s[] = "teste";
	ft_bzero(s, 2);
	printf("%s", s);
}*/
