/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:23:35 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 16:06:10 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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

	str1 = "AaZz";
	str2 = "Opa123*\";
	
	printf("O retorno de '%s' é %d\n",str1, ft_str_is_alpha(str1));
	printf("O retorno de '%s' é %d\n", str2, ft_str_is_alpha(str2));
	return (0);
}  */
