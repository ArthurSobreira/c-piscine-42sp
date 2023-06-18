/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:02:24 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/06 17:58:38 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	temp_var;
	int	first_index;
	int	last_index;

	first_index = 0;
	last_index = size - 1;
	while (first_index < (size / 2))
	{
		temp_var = tab[first_index];
		tab[first_index] = tab[last_index];
		tab[last_index] = temp_var;
		first_index++;
		last_index--;
	}
}

/* int	main(void)
{
	int	my_array[5] = {1, 2, 3, 4, 5};
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
	
	// call the function	
	count = 0;
	ft_rev_int_tab(my_array, size);

	while (count < size)
	{
		printf("[%d]", my_array[count]);
		count++;
	}
	printf(" => Depois\n");
	return (0);
}*/