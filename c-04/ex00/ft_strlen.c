/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:24:57 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/14 10:27:46 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{	
		str++;
		len++;
	}
	return (len);
}

/* int	main(void)
{
	char	*str;
	int	num_char;
	
	str = "Teste123";
	num_char = ft_strlen(str);
	printf("'%s', tem %d caracteres \n", str, num_char);
	return (0);
} */