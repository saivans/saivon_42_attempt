/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:08:16 by stagma            #+#    #+#             */
/*   Updated: 2025/08/30 18:31:40 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	k;

	if (nb == 1)
		return (1);
	else if (nb == 0)
		return (0);
	else if (nb >= 2)
	{
		k = 0 ;
		while (k * k <= nb)
		{
			k++;
		}
		return (k - 1);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	a;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	else if (nb > 2)
	{
		a = 3 ;
		while (a <= ft_sqrt(nb))
		{
			if (nb % a == 0)
				return (0);
			a += 2 ;
		}
	}
	return (1);
}
