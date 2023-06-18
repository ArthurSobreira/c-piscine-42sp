/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:26:03 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/13 12:22:13 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index_src;
	int	index_dest;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
	{
		index_dest++;
	}
	while (src[index_src])
	{
		dest[index_dest + index_src] = src[index_src];
		index_src++;
	}
	dest[index_dest + index_src] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	str1[50] = "coi";
	char	str2[50] = "sas legais";

	printf("Primeira string: %s\n", str1);
	printf("Segunda string: %s\n", str2);
	
	//printf("Valor concatenado (strcat): '%s'\n", strcat(str1, str2));
	printf("Valor concatenado (ft_strcat): '%s'\n ", ft_strcat(str1, str2));
	return(0);
} */