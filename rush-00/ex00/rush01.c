/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:04:00 by marvin            #+#    #+#             */
/*   Updated: 2023/06/20 20:16:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	error(void);

void	print_error(int x, int y)
{
	if ((x < 1) || (y < 1))
	{
		error();
	}
}

void	print_spaces_between(int col, int x)
{
	if ((col == 1) || (col == x))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

int	print_first_last_line(int col, int row, int x, int y)
{
	if (((col == 1) && (row == 1)) || ((col == x) && (row == y)))
	{
		if ((x == 1) && (y == 1))
		{
			ft_putchar('/');
			return (0);
		}
		else if (((x == 1) || (y == 1)) && ((col == x) && (row == y)))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('/');
		}
	}
	else if (((row == y) && (col == 1)) || ((row == 1) && (col == x)))
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
	return (0);
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	if ((y >= 0) && (x >= 0))
	{
		while (row <= y)
		{
			while (col <= x)
			{
				if (((y > 2) && (x > 2)) && ((row > 1) && (row < y)))
				{
					print_spaces_between(col, x);
				}
				else
				{
					print_first_last_line(col, row, x, y);
				}
				col++;
			}
			ft_putchar('\n');
			col = 1;
			row++;
		}
	}
	else
	{
		print_error(x, y);	
	}
}
