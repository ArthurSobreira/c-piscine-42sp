/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:08:41 by arsobrei          #+#    #+#             */
/*   Updated: 2023/06/14 13:35:47 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	ft_str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_index;
	unsigned int	src_index;
	unsigned int	lenght;

	lenght = ft_str_len(dest) + ft_str_len(src);
	dest_index = ft_str_len(dest);
	src_index = 0;
	if (size > dest_index)
	{
		while ((src[src_index]) && (dest_index < size - 1))
		{
			dest[dest_index] = src[src_index];
			dest_index++;
			src_index++;
		}
		dest[dest_index] = '\0';
		return (lenght);
	}
	return (ft_str_len(src) + size);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>
// compile with -lbsd

/* int main(void)
{
    char    src[] = "1234";
    char    dest[20] = "567";
    int     size = 2;

    //printf("%ld\n", strlcat(dest, src, size));
    printf("%d\n", ft_strlcat(dest, src, size));
    return (0);
}  */
