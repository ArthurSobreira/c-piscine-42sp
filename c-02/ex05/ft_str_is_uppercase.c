/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:43:46 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 16:23:26 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
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

	str1 = "ABCD";
	str2 = "aBcD";

	printf("O retorno de '%s' é %d\n", str1, ft_str_is_uppercase(str1));
	printf("O retorno de '%s' é %d\n", str2, ft_str_is_uppercase(str2));
	return (0);
} */ 