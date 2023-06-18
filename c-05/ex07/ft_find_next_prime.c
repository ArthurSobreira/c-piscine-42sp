/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:01:17 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 11:35:15 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	if ((nb == 2 || nb == 3 || nb == 5 || nb == 7))
	{
		return (1);
	}
	else if (nb < 2)
	{
		return (0);
	}
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while ((nb < 2147483647) && (!ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

/* int	main(void)
{
	int nbr;

	nbr = 96;
	printf("O próximo primo depois de %d é: %d", nbr, ft_find_next_prime(nbr));
	return (0);
} */