/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:54:16 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/06 17:49:16 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_var;

	temp_var = *a;
	*a = *b;
	*b = temp_var;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;

	printf("Antes da Troca: a = %d | b = %d \n", a, b);

	ft_swap(&a, &b);

	printf("Depois da Troca: a = %d | b = %d \n", a, b);
} */