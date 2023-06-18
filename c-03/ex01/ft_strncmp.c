/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:53:55 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/14 19:46:02 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((s1[index]) && (s1[index] == s2[index]) && (index < n))
	{
		index++;
	}
	if (index == n)
	{
		return (0);
	}
	return (s1[index] - s2[index]);
}

/* int	main(void)
{
	char	str1[] = "Teste";
	char	str2[] = "Tes";
	int		n = 3;
	
	printf("Primeira string: %s\n", str1);
	printf("Segunda string: %s\n", str2);
	printf("\n");
	// printf("Valor da comparação (strncmp): %d\n", strncmp(str1, str2, n));
	printf("Valor da comparação (ft_strncmp): %d\n", ft_strncmp(str1, str2, n));
	return (0);
} */