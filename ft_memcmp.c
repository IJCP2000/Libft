/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:33:59 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/20 19:30:29 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char s1[] = "Hello";
	unsigned char s2[] = "Hello";

	printf("TEST 1 ==\n"); 
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 6)); 
	printf("memcmp = %d\n\n", memcmp(s1, s2, 6));

	printf("TEST 2 n = 0\n");      
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 0)); 
	printf("memcmp = %d\n\n", memcmp(s1, s2, 0));      

	unsigned char s3[] = "Hello";
	unsigned char s4[] = "Hella";

	printf("TEST 3 s1 > s2\n"); 
	printf("ft_memcmp = %d\n", ft_memcmp(s3, s4, 6)); 
	printf("memcmp = %d\n\n", memcmp(s3, s4, 6));

	unsigned char s5[] = "Hella";
	unsigned char s6[] = "Hello";

	printf("TEST 4 s1 < s2\n"); 
	printf("ft_memcmp = %d\n", ft_memcmp(s5, s6, 6)); 
	printf("memcmp = %d\n", memcmp(s5, s6, 6));
	
	return (0);
}
*/
