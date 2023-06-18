/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:47:51 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 16:55:37 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	index;

	len = 0;
	index = 0;
	while (src[len])
	{
		len++;
	}
	if (size < 1)
	{
		return (len);
	}
	while ((src[index] != '\0') && (index < (size - 1)))
	{	
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (len);
}

/* int	main(void)
{
	char	destiny[50];
	char	source[] = "1234";
	int	size;

	size = 50;
	printf("O len do Destino é %d\n", ft_strlcpy(destiny, source, size));	
	return (0);
} */