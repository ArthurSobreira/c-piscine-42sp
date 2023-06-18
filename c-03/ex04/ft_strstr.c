/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:01:55 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/14 20:35:48 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	ind;
	int	n_ind;

	ind = 0;
	n_ind = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[ind])
	{
		while ((str[ind + n_ind] == to_find[n_ind]) && (str[ind + n_ind]))
		{
			n_ind++;
			if (to_find[n_ind] == '\0')
			{
				return (str + ind);
			}
		}
		ind++;
		n_ind = 0;
	}
	return (0);
}

int main(void)
{
    char    str[50] = "12345";
    char    to_find[] = "6";
    
    printf("Valor da string: %s\n", str);
    //printf("Primeira ocorrência de '%s' (strstr): %s\n", to_find, strstr(str, to_find));
    printf("Primeira ocorrência de '%s' (ft_strstr): %s\n", to_find, ft_strstr(str, to_find));
    return (0);
}