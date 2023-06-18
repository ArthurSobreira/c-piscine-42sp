/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:45 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 17:29:45 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	
	index = 0;
	while ((s1[index]) && (s1[index] == s2[index]))
	{
		index++;
	}
	return(s1[index] - s2[index]);
}

void	ft_swap(char **val1, char **val2)
{
	char	*temp;

	temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int	main(int argc, char *argv[])
{
	int	index1;
	int	index2;

	index1 = 1;
	while (index1 < argc)
	{
		index2 = 1;
		while (index2 < argc)
		{
			if (ft_strcmp(argv[index1], argv[index2]) < 0)
			{
				ft_swap(&argv[index1], &argv[index2]);
			}
			index2++;
		}
		index1++;
	}
	index1 = 1;
	while (index1 < argc)
	{
		ft_putstr(argv[index1]);
		index1++;
	}
	return (0);
}