/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:29:54 by stagma            #+#    #+#             */
/*   Updated: 2025/08/13 18:20:42 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	m;
	char	n;
	char	l;

	m = '0' ;
	while (m <= '7')
	{
		n = m + 1 ;
		while (n <= '8')
		{
			l = n + 1 ;
			while (l <= '9')
			{
				ft_print_result(m, n, l);
				l++;
			}
			n++;
		}
		m++;
	}
}
