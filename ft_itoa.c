/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:16:51 by dde-lima          #+#    #+#             */
/*   Updated: 2024/10/01 18:06:34 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_lenght(int n)
{
	int	lenght;

	lenght = 0;
	if(n < 0)
	{
		lenght++;
		n *= -1;
	}
	while(n > 0)
	{
		lenght++;
		n /= 10;
	}
	return (lenght);
}

char *ft_itoa(int n)
{
	char *str;

	int n_lenght = get_lenght(n);
	str = (char *)malloc(sizeof(char) * n_lenght + 1);
	str[n_lenght] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while(n > 0)
	{
		str[n_lenght -1] = n % 10 +'0';
		n /= 10;
		n_lenght--;
	}
	return (str);
}

int main()
{
	int n = -442;
	char *s = ft_itoa(n);
	printf("%s", s);
}
