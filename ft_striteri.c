/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:44:54 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/26 14:50:47 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int i;
	i = 0;

	if(s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}

}

void ft_putstr(unsigned int i, char *c)
{
	i = 0;
	char n ='a';
	while(c[i] != '\0')
	{

		write(1, &c[i], 1);
		i++;
	}
}
int main()
{
	char *s = "teste";
	ft_striteri(s, ft_putstr);
}
