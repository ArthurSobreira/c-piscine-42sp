/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:57:38 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 16:28:44 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] != 127))
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

	str1 = "a *~12";
	str2 = "\t";

	printf("O retorno de '%s' é %d\n", str1, ft_str_is_printable(str1));
	printf("O retorno de '%s' é %d\n", str2, ft_str_is_printable(str2));
	return (0);
}*/