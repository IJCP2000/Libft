/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:18:45 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/20 21:05:15 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char*)big);
	while (j < len)
	{
		while (big[j] != '\0')
		{
			if (big[j] == little[i])
				return ((char *) &big[j]);
			i++;
			j++;
		}
	}
	return (NULL);
}

int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";

    // Test case 1: Normal match
    const char *result = strnstr(haystack, needle, 13);
    if (result) {
        printf("Test 1: Found \"%s\" in \"%s\": %s\n", needle, haystack, result);
    } else {
        printf("Test 1: \"%s\" not found in \"%s\"\n", needle, haystack);
    }

    // Test case 2: Not found because of length restriction
    result = strnstr(haystack, needle, 8);
    if (result) {
        printf("Test 2: Found \"%s\" in \"%s\": %s\n", needle, haystack, result);
    } else {
        printf("Test 2: \"%s\" not found in first 8 chars of \"%s\"\n", needle, haystack);
    }

    // Test case 3: Empty needle (should return haystack)
    result = strnstr(haystack, "", 5);
    if (result) {
        printf("Test 3: Empty needle returns: %s\n", result);
    }

    // Test case 4: Needle longer than haystack
    result = strnstr("short", "thisislong", 10);
    if (result) {
        printf("Test 4: Unexpected match: %s\n", result);
    } else {
        printf("Test 4: No match as needle is longer than haystack\n");
    }

    // Test case 5: Match at beginning
    result = strnstr("abcdef", "abc", 3);
    if (result) {
        printf("Test 5: Found \"%s\" in \"%s\": %s\n", "abc", "abcdef", result);
    }

    return 0;
}
