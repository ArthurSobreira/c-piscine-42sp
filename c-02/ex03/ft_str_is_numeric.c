/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:31:38 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 16:12:02 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;
	
	str1 = "01289";
	str2 = "abc123+*!";
	
	printf("O retorno de '%s' é %d\n", str1, ft_str_is_numeric(str1));
	printf("O retorno de '%s' é %d\n", str2, ft_str_is_numeric(str2));
	return (0);
}*/ 