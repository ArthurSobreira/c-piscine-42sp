/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:23:45 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 11:55:13 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb >= 1)
		{
			fact = fact * nb;
			nb = nb - 1;
		}
	}
	return (fact);
}

/* int	main(void)
{
	int	nbr;

	nbr = 3;
	printf("!%d = %d", nbr, ft_iterative_factorial(nbr));
	return(0);
} */