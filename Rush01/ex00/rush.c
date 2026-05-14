/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:21:24 by denferna          #+#    #+#             */
/*   Updated: 2024/12/01 17:30:39 by denferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	rush_recursive(char **puzzle_board, int row, int column)
{
	int	i;

	i = 1;
	while (i <= 4 && row <= 4 && column <= 4)
	{
		if (!is_in_column(puzzle_board, row, column, i)
			&& !is_in_row(puzzle_board, row, column, i))
		{
			puzzle_board[row][column] = i + '0';
			if (row == 4 && !is_correct_top_view(puzzle_board, column))
				return ;
			if (column == 4)
			{
				if (is_correct_left_view(puzzle_board, row))
				{
					rush_recursive(puzzle_board, row + 1, 1);
					if (row == 4 && is_correct_top_view(puzzle_board, column))
						print_solution(puzzle_board);
				}
			}
			else
				rush_recursive(puzzle_board, row, column + 1);
		}
		i++;
	}
}

void	rush(char **clues)
{
	char	**puzzle_board;

	puzzle_board = create_board();
	set_clues(puzzle_board, clues);
	rush_recursive(puzzle_board, 1, 1);
	if (puzzle_board[0][0] == '0')
		print_error();
}
