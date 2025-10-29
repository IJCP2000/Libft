/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:48:54 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 19:27:39 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*og;
	unsigned char		*copy;

	og = (unsigned char *) src;
	copy = (unsigned char *) dest;
	if (og == copy || n == 0)
		return (dest);
	if (copy <= og)
		while (n--)
			*copy++ = *og++;
	else
	{
		while (n > 0)
		{
			n--;
			copy[n] = og[n];
		}
	}
	return (dest);
}
/*
int main()
{
    char src1[] = "Hello, memmove!";
    char dest1[20];
    char src2[] = "Hello, memmove!";
    char dest2[20];

    // Test 1: normal non-overlapping copy
    printf("Test 1: Non-overlapping\n");
    ft_memmove(dest1, src1, strlen(src1) + 1);
    memmove(dest2, src2, strlen(src2) + 1);
    printf("ft_memmove result: %s\n", dest1);
    printf("memmove result:    %s\n", dest2);

    // Test 2: overlapping copy, dest starts inside src
    printf("\nTest 2: Overlapping (dest > src)\n");
    char overlap1[] = "1234567890";
    char overlap2[] = "1234567890";

    ft_memmove(overlap1 + 4, overlap1, 6); 
				// copying "123456" starting at overlap1+4
    memmove(overlap2 + 4, overlap2, 6);

    printf("ft_memmove result: %s\n", overlap1);
    printf("memmove result:    %s\n", overlap2);

    // Test 3: overlapping copy, src starts inside dest
    printf("\nTest 3: Overlapping (src > dest)\n");
    char overlap3[] = "abcdefghij";
    char overlap4[] = "abcdefghij";

    ft_memmove(overlap3, overlap3 + 2, 6); 
				// copying "cdefgh" to start of overlap3
    memmove(overlap4, overlap4 + 2, 6);

    printf("ft_memmove result: %s\n", overlap3);
    printf("memmove result:    %s\n", overlap4);

    return 0;
}
*/
