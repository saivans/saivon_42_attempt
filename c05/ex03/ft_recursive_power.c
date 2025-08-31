/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:34:29 by stagma            #+#    #+#             */
/*   Updated: 2025/08/30 14:22:07 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	prod;

	if (nb == 0 && power == 0)
		return (1);
	else if (power != 0)
	{
		prod = nb * ft_recursive_power(nb, (power - 1));
		return (prod);
	}
	else if (power == 0)
		return (1);
	return (0);
}
