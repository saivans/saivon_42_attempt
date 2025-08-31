/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:23:34 by stagma            #+#    #+#             */
/*   Updated: 2025/08/30 13:18:56 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	f;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		f = nb * ft_recursive_factorial(nb - 1);
		return (f);
	}
	return (0);
}
