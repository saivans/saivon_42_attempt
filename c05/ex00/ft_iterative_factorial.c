/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:19:43 by stagma            #+#    #+#             */
/*   Updated: 2025/08/30 15:11:31 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		f = nb ;
		i = 1 ;
		while (i < nb)
		{
			f = f * (nb - i);
			i++;
		}
		return (f);
	}
	else
		return (0);
}
