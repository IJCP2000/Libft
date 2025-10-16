/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:50:42 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/15 16:57:57 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char unsigned *temp;

	temp = (char unsigned *) str;
	i = 0;
	while(i < n)
	{
		temp[i] = (char unsigned) c;
		i++;
	}

	return(temp);
}
/*
int main(void)
{
    char str1[] = "Hello, Darkness old friend\n";
    char str2[] = "Hello, Darkness old friend\n";
    ft_memset(str1, '*', 3);
    memset(str2, '*', 3);
    printf("%s", str1);
    printf("%s", str2);
    return (0);
}
*/
