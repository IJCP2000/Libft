/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:34:15 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 19:12:38 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*copy_s;
	char	cc;

	copy_s = (char *)s;
	cc = (char)c;
	i = 0;
	while (i < n)
	{
		if (copy_s[i] == cc)
			return ((char *) &copy_s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "Goodbye";
    char c = 'd';
    printf("TESTE 1\n");
    printf("ft_memchr = %p\n", ft_memchr(s, c, 8));
    printf("memchr    = %p\n", memchr(s, c, 8));

    char t[] = "Goodbye";
    char d = 'a';
    printf("TESTE 2\n");
    printf("ft_memchr = %p\n", ft_memchr(t, d, 8));
    printf("memchr    = %p\n", memchr(t, d, 8));

    char u[] = "Goodbye";
    char e = 'd';
    printf("TESTE 3\n");
    printf("ft_memchr = %p\n", ft_memchr(u, e, 0));
    printf("memchr    = %p\n", memchr(u, e, 0));

    char v[] = "Goodbye";
    char f = '0';
    printf("TESTE 4\n");
    printf("ft_memchr = %p\n", ft_memchr(v, f, 8));
    printf("memchr    = %p\n", memchr(v, f, 8));

    return 0;
}
*/
