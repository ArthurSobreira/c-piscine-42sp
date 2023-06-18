/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:17:43 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/08 15:56:18 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	destiny[50];
	char	source[] = "Oi, tudo bem?";
		
	ft_strcpy(destiny, source);
	
	printf("%s\n", destiny);

	return(0);
}*/