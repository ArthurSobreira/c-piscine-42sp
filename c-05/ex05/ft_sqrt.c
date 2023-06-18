/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:28:10 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 10:51:22 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			else if (index >= 46341)
			{
				return (0);
			}
			index++;
		}
	}
	return (0);
}

/* int	main(void)
{
	int	nbr;

	nbr = 144;
	if (ft_sqrt(nbr) == 0)
	{
		printf("%d não possui raíz exata.", nbr);
	}
	else
	{
		printf("A raiz de %d é %d", nbr, ft_sqrt(nbr));	
	}
} */