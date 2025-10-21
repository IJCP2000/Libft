/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:45 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/21 17:22:08 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (j < len && big[j] != '\0')
	{
		i = 0;
		while (little[i] && (j + i) < len && big[i + j] == little[i])
			i++;
		if (little[i] == '\0')
			return ((char *) &big[j]);
		j++;
	}
	return (NULL);
}
/*
int main()
{
    const char *big = "Hello, this is a test string";
    const char *little = "test";
    size_t len = 20;

    char *result_std = strnstr(big, little, len);
    char *result_ft = ft_strnstr(big, little, len);

    printf("Test 1\n");
    printf("Original strnstr result: %s\n", result_std);
    printf("Your ft_strnstr result: %s\n\n", result_ft);

    const char *big2 = "Hello, this is a test string";
    const char *little2 = "Hello,";
    size_t len2 = 6;

    char *result_std2 = strnstr(big2, little2, len2);
    char *result_ft2 = ft_strnstr(big2, little2, len2);

    printf("Test 2\n");
    printf("Original strnstr result: %s\n", result_std2);
    printf("Your ft_strnstr result: %s\n", result_ft2);

    return 0;
}
*/
