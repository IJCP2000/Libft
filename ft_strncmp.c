/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:20:40 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 19:41:02 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    const char *s1;
    const char *s2;
    size_t n;
    int result_std;
    int result_ft;

    // Test 1
    s1 = "hello";
    s2 = "hello";
    n = 5;
    result_std = strncmp(s1, s2, n);
    result_ft = ft_strncmp(s1, s2, n);
    printf("Test 1:\n");
    printf("  strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result_std);
    printf("  ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s1, s2, n, result_ft);

    // Test 2
    s1 = "hello";
    s2 = "hella";
    n = 5;
    result_std = strncmp(s1, s2, n);
    result_ft = ft_strncmp(s1, s2, n);
    printf("Test 2:\n");
    printf("  strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result_std);
    printf("  ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s1, s2, n, result_ft);

    // Test 3
    s1 = "abc";
    s2 = "abcd";
    n = 3;
    result_std = strncmp(s1, s2, n);
    result_ft = ft_strncmp(s1, s2, n);
    printf("Test 3:\n");
    printf("  strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result_std);
    printf("  ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s1, s2, n, result_ft);

    // Test 4
    s1 = "";
    s2 = "abc";
    n = 1;
    result_std = strncmp(s1, s2, n);
    result_ft = ft_strncmp(s1, s2, n);
    printf("Test 4:\n");
    printf("  strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result_std);
    printf("  ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s1, s2, n, result_ft);

    // Test 5
    s1 = "abc";
    s2 = "";
    n = 1;
    result_std = strncmp(s1, s2, n);
    result_ft = ft_strncmp(s1, s2, n);
    printf("Test 5:\n");
    printf("  strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result_std);
    printf("  ft_strncmp(\"%s\", \"%s\", %zu) = %d\n\n", s1, s2, n, result_ft);

    return 0;
}
*/
