/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-lima <dde-lima@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:08:32 by dde-lima          #+#    #+#             */
/*   Updated: 2024/09/23 16:17:20 by dde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c <= 31)
		return (0);
	return (1);
}

/*int main()
{
	#include <stdio.h>
	printf("%i", ft_isprint('A'));
}*/
