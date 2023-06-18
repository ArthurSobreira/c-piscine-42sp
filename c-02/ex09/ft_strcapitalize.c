/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:45:33 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 16:52:33 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_sym(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
	{
		return (0);
	}
	if ((str >= 48) && (str <= 57))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		if ((i == 0) || (ft_str_is_sym(str[i - 1])))
		{	
			if ((str[i] >= 97) && (str[i] <= 122))
			{
				str[i] = str[i] - 32;
			}
		}	
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("A string era '%s'\n", str);

	printf("A string agora é '%s'\n", ft_strcapitalize(str));
	return (0);
} */