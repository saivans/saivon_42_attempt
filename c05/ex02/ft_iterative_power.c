/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:22:01 by stagma            #+#    #+#             */
/*   Updated: 2025/08/30 13:43:08 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;
	int	prod;

	if (nb == 0 && power == 0)
		return (1);
	else if (power != 0)
	{
		prod = 1 ;
		p = 0 ;
		while (p < power)
		{
			prod = prod * nb ;
			p++;
		}
		return (prod);
	}
	else if (power == 0)
		return (1);
	return (0);
}
