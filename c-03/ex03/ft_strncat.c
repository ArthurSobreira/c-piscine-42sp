/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:43:23 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/13 12:24:07 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_src;
	unsigned int	index_dest;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
	{
		index_dest++;
	}
	while ((src[index_src] != '\0') && (index_src < nb))
	{
		dest[index_dest + index_src] = src[index_src];
		index_src++;
	}
	dest[index_dest + index_src] = '\0';
	return (dest);
}

/* int main(void)
{
    char	str1[50] = "coisas le";
	char	str2[50] = "gais";
	int		n = 4;
	
	printf("Primeira string: %s\n", str1);
	printf("Segunda string: %s\n", str2);
	printf("\n");
	//printf("Valor da comparação (strncat): %s\n", strncat(str1, str2, n));
	printf("Valor da comparação (ft_strncat): %s\n", ft_strncat(str1, str2, n));
	return (0);    
} */
