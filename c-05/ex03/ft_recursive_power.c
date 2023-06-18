/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:09:00 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 12:23:03 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
		return (nb * (ft_recursive_power(nb, power - 1)));
	}
}

/* int	main(void)
{
	int nb;
	int pow;

	nb = 10;
	pow = 2;
	printf("%d^(%d) == %d", nb, pow, ft_recursive_power(nb, pow));
	return (0);
} */