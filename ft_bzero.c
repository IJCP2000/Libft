/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:16:00 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/15 18:10:06 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char unsigned	*str;
	size_t	i;

	str = (char unsigned *) s;

	i = 0;
	while(i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main(void)
{
    char str1[] = "Hello, Darkness old friend\n";
    char str2[] = "Hello, Darkness old friend\n";
	printf("before = %c\n", str1[7]);
    ft_bzero(str1, 8);
    bzero(str2, 8);
	printf("before = %c\n", str1[7]);
    printf("ft_bzero = %s\n", str1);
    printf("bzero = %s\n", str2);
    return (0);
}
*/
