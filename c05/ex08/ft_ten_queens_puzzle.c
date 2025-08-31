/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:23:05 by stagma            #+#    #+#             */
/*   Updated: 2025/08/31 23:45:40 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	safe(int board[10], int x, int y)
{
	int i;

	i = 0 ;
	while (i < col)
	{
		if (board[i] == y)
			return (0);
		if ((board[i] - y) == (i - x) || (y - board[i]) == (i - x))
			return (0);
		i++;
	}
	return (1);
}

void	print_sol(int board[10])
{
	int	i;

	i = 0 ;
	while (i < 10)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	solve(int board[10], int x)
{
	int	y;
	int	sum;

	if (y == 10)
	{
		print_sol(board);
		return (1);
	}
	y = 0 ;
	sum = 0 ;
	while (y < 10)
	{
		if (safe(board, x, y))
		{
			board[x] = y ;
			sum += solve(board, x + 1);
		}
		y++;
	}
	return (sum);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	solutions;

	solutions = solve(board, 0);
	return (solutions);
}
