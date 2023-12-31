/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:44:34 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 16:56:14 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int	index;

	index = argc - 1;
	while (index > 0)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index--;
	}
	return (0);
}
