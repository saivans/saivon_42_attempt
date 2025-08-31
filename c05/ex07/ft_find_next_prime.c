/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 19:43:33 by stagma            #+#    #+#             */
/*   Updated: 2025/08/31 21:21:31 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	k;

	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb >= 2)
	{
		k = 0 ;
		while (k * k <= nb)
			k++;
		k--;
		return (k);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	a;

	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	a = 3 ;
	while (a <= ft_sqrt(nb))
	{
		if (nb % a == 0)
			return (0);
		a += 2 ;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	a;

	a = nb;
	while (a >= nb)
	{
		if (ft_is_prime(a))
			break ;
		a++;
	}
	return (a);
}
