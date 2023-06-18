/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:49:40 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/15 10:15:24 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	index;
	int	is_neg;
	int	number;

	index = 0;
	is_neg = 1;
	number = 0;
	while (((str[index] >= 9) && (str[index] <= 13)) || (str[index] == 32))
	{
		index++;
	}
	while (str[index] == '-' || str[index] == '+' )
	{
		if (str[index] == '-')
		is_neg *= -1;
		index++;
	}
	while ((str[index]) && ((str[index] >= '0') && (str[index] <= '9')))
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	number *= is_neg;
	return (number);
}

/* int	main(void)
{
	char	str[] = "   ---+--+1234ab567";

	printf("%d", ft_atoi(str));
	return (0);
} */