/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush04cp1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:58:50 by stagma            #+#    #+#             */
/*   Updated: 2025/08/17 15:01:28 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_firstlast(char a, char c, int i, int y);

void	ft_mid(int i, int j, int x, int y);

void	ft_putchar(char c);

void	ft_rush04cp1(int x, int y)
{
	int	i;
	int	j;
	int	cas;

	i = 0 ;
	j = 1 ;
	cas = 1 ;
	if (x == 0 || y == 0)
		return ;
	while (cas <= 3)
	{
		if (cas == 1)
			ft_firstlast('A', 'C', i, x);
		else if (cas == 2)
			ft_mid(i, j, x, y);
		else if(cas == 3)
		{
			if (y != 1) 
			{
				ft_putchar('\n');
				ft_firstlast('C', 'A', i, x);
			}
		}		
		cas++;
	}
	ft_putchar('\n');
}

void	ft_firstlast(char a, char c, int i, int y)
{
	i = 0 ;
	if (i < y)
	{
		ft_putchar(a);
	}
	while (i < y - 2)
	{
		ft_putchar('B');
		i++;
	}
	i += 2 ;
	if (i == y)
	{
		ft_putchar(c);
	}
}

void	ft_mid(int i, int j, int x, int y)
{
	while (j < y - 1)
	{
		ft_putchar('\n');
		ft_putchar('B');
		i = 0 ;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		i += 2 ;
		if (i == x) {
			ft_putchar('B');
		}
			j++;
	}
}
