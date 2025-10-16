/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:10:23 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/15 19:26:41 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *cpsrc;
	unsigned char *cpdest;

	if(!dest && !src)
		return(NULL);

	i = 0;
	cpsrc = (unsigned char *) src;
	cpdest = (unsigned char *) dest;
	while(i < n)
	{
		cpdest[i] = cpsrc[i];
		i++;
	}
	return(dest);
}
/*
int main(void)
{
    char src1[] = "Requiem for a Dream";
    char dest1[20];
    char dest2[20];

    // Initialize dest1 and dest2 with something so you see the change clearly
    strcpy(dest1, "bork");
    strcpy(dest2, "bork");

    printf("Before function call:\n");
    printf("src1 = %s\n", src1);
    printf("dest1 = %s\n", dest1);
    printf("dest2 = %s\n", dest2);

    // Test your ft_memcpy
    ft_memcpy(dest1, src1, 6);
    printf("\nAfter ft_memcpy(dest1, src1, 6):\n");
    printf("dest1 = %s\n", dest1);

    // Test standard memcpy
    memcpy(dest2, src1, 6);
    printf("\nAfter memcpy(dest2, src1, 6):\n");
    printf("dest2 = %s\n", dest2);

    return 0;
}
*/
