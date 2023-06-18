/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:29:40 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/07 18:49:02 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	val_01;
	int	val_02;

	val_01 = 0;
	while (val_01 < 99)
	{	
		val_02 = val_01 + 1;
		while (val_02 < 100)
		{
			ft_putchar(val_01 / 10 + '0');
			ft_putchar(val_01 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(val_02 / 10 + '0');
			ft_putchar(val_02 % 10 + '0');
			if (!((val_01 == 98) && (val_02 == 99)))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			val_02++;
		}
		val_01++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}