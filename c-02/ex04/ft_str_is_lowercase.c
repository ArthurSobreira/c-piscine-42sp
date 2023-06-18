/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:49:14 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 16:16:00 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
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

	str1 = "abcd";
	str2 = "AbCd";
	
	printf("O retorno de '%s' é %d\n", str1, ft_str_is_lowercase(str1));
	printf("O retorno de '%s' é %d\n", str2, ft_str_is_lowercase(str2));
	return(0);
} */ 