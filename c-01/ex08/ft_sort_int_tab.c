/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:59:35 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/06 18:00:15 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	temp_var;
	int	position;

	count = 0;
	while (count < size - 1)
	{	
		position = 0;
		while (position < size - 1)
		{
			if (tab[position] > tab[position + 1])
			{
				temp_var = tab[position];
				tab[position] = tab[position + 1];
				tab[position + 1] = temp_var;
			}
			position++;
		}
	count++;
	}
}

/* int	main(void)
{
	int	my_array[5] = {3, 8, 1, 4, 7};
	int	count;
	int	size;

	count = 0;
	size = 5;
	while (count < size)
	{
		printf("[%d]", my_array[count]);
		count++;
	}
	printf(" => Antes\n");

	count = 0;
	ft_sort_int_tab(my_array, size);
	while (count < size)
	{
		printf("[%d]", my_array[count]);
		count++;
	}
	printf(" => Depois\n");
	return (0);
} */