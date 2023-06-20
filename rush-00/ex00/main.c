/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:03:50 by marvin            #+#    #+#             */
/*   Updated: 2023/06/20 20:28:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	error(void);

int	ft_atoi(char *str)
{
	int	result;
	int	index;
	int	sign;

	result = 0;
	index = 0;
	sign = 1;
	while (((str[index] >= 9) && (str[index] <= 13)) || (str[index] == 32))
	{
		index++;
	}
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
		{
			sign *= -1;
			index++;
		}	
	}
	while ((str[index]) && ((str[index] >= '0') && (str[index] <= '9')))
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	result *= sign;
	return (result);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
		return (0);
	}
	error();
	return (0);
}
