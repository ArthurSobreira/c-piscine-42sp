/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:10:02 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 12:18:04 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_print_power(int nb, int power)
{
	int	count;
	int	result;

	count = 1;
	result = nb * nb;
	while (count < power - 1)
	{
		result = result * nb;
		count++;
	}
	return (result);
}

int	ft_iterative_power(int nb, int power)
{
	if ((power < 0) || ((nb == 0) && (power != 0)))
	{
		return (0);
	}
	if ((nb == 0) || (power == 0))
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (ft_print_power(nb, power));
	}
}

/* int	main(void)
{
	int nb;
	int pow;

	nb = 3;
	pow = 2;
	printf("%d^(%d) = %d", nb, pow, ft_iterative_power(nb, pow));
	return (0);
} */