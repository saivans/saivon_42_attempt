/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:49:17 by stagma            #+#    #+#             */
/*   Updated: 2025/08/31 13:17:25 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	validate_base(char *base)
{
	int	i;
	int	j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0 ;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			b;
	long		divisor;
	long		num;

	if (!validate_base(base))
		return ;
	num = (long)nbr ;
	b = 0 ;
	while (base[b])
		b++;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num ;
	}
	divisor = 1 ;
	while (num / divisor >= b)
		divisor *= b ;
	while (divisor >= 1)
	{
		ft_putchar(base[num / divisor]);
		num %= divisor ;
		divisor /= b ;
	}
}
