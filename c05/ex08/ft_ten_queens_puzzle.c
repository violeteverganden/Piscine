/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diwata <diwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:44:00 by diwata            #+#    #+#             */
/*   Updated: 2020/08/15 09:06:29 by diwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_queen_position(int board[10][10])
{
	char	position;
	int		column;
	int		row;

	position = '0';
	column = 0;
	while (column < 10)
	{
		row = 0;
		while (row < 10)
		{
			if (board[column][row])
			{
				position = '0' + row;
				write(1, &position, 1);
			}
			row++;
		}
		column++;
	}
	write(1, "\n", 1);
}

int		ft_is_safe(int column, int row, int board[10][10])
{
	int c;
	int r;

	c = column;
	while (c >= 0)
		if (board[c--][row])
			return (0);
	c = column;
	r = row;
	while (c >= 0 && r >= 0)
		if (board[c--][r--])
			return (0);
	c = column;
	r = row;
	while (c >= 0 && r < 10)
		if (board[c--][r++])
			return (0);
	return (1);
}

void	ft_solve_puzzle(int column, int board[10][10], int *solution)
{
	int row;

	if (column == 10)
	{
		*solution += 1;
		ft_display_queen_position(board);
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(column, row, board))
		{
			board[column][row] = 1;
			ft_solve_puzzle(column + 1, board, solution);
			board[column][row] = 0;
		}
		row++;
	}
}

void	ft_initialize(int board[10][10])
{
	int column;
	int row;

	column = 0;
	while (column < 10)
	{
		row = 0;
		while (row < 10)
			board[column][row++] = 0;
		column++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	solution;

	ft_initialize(board);
	solution = 0;
	ft_solve_puzzle(0, board, &solution);
	return (solution);
}
