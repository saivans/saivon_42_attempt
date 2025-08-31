/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:26:41 by stagma            #+#    #+#             */
/*   Updated: 2025/08/30 15:42:20 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else if (index < 0)
		return (-1);
	fibo = ft_fibonacci(index - 3) + 2 * ft_fibonacci(index - 2);
	return (fibo);
}
