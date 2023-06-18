/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:47:36 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/06 17:56:05 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{	
		str++;
		count++;
	}
	return (count);
}

/* int	main(void)
{
	char	*str;
	int	num_char;
	
	str = "Teste123";
	num_char = ft_strlen(str);
	printf("'Teste', tem %d caracteres \n", num_char);
	return (0);
} */