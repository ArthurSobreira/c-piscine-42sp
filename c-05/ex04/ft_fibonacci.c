/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:49:07 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 12:28:02 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	}
}

/* int	main(void)	
{
	int	num;
	
	num = 1;
	printf("O %do número da sequência de fibonacci é: %d ",num , ft_fibonacci(num));
} */