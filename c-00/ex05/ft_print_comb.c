/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:24:08 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/06 15:07:21 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int x, int y, int z)
{
	write(1, &x, 1);
	if (&y != &x)
	{
		write(1, &y, 1);
		if ((&z != &y) && (&z != &x))
		{
			write(1, &z, 1);
		}
	}
	if (!((x == 55) && (y == 56) && (z == 57)))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = 48;
	while (first <= 55)
	{	
		second = first + 1;
		while (second <= 56)
		{	
			third = second + 1;
			while (third <= 57)
			{
				print_numbers(first, second, third);
				third++;
			}
			third = 48;
			second++;
		}
		second = 48;
		first++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
