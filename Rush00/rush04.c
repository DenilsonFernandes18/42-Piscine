/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:02:55 by auesteve          #+#    #+#             */
/*   Updated: 2024/11/24 16:16:52 by auesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char start, char mid, char ends)
{
	int	linha;

	linha = 1;
	while (linha <= x)
	{
		if (linha == 1)
			ft_putchar (start);
		else if (linha == x)
			ft_putchar(ends);
		else
			ft_putchar(mid);
		linha++;
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	col = 1;
	while (col <= y)
	{
		if (col == 1)
			ft_print_line(x, 'A', 'B', 'C');
		else if (col == y)
			ft_print_line(x, 'C', 'B', 'A');
		else
			ft_print_line(x, 'B', ' ', 'B');
		col++;
	}
}
