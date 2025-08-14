/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:15:23 by stagma            #+#    #+#             */
/*   Updated: 2025/08/14 16:14:25 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_plus(int a, int b)
{
	char	c;

	c = (a / b + '0');
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	divnb;

	divnb = 1 ;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	while (nb / divnb >= 10)
	{
		divnb *= 10;
	}
	while (divnb > 0)
	{
		ft_putchar_plus(nb, divnb);
		nb %= divnb;
		divnb /= 10 ;
	}
}
