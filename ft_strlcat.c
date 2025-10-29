/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:02:18 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 15:42:13 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclgt;
	size_t	dstlgt;
	size_t	i;

	i = 0;
	srclgt = 0;
	dstlgt = 0;
	while (dst[dstlgt] != '\0' && dstlgt < dstsize)
		dstlgt++;
	while (src[srclgt] != '\0')
		srclgt++;
	if (dstlgt == dstsize)
		return (dstsize + srclgt);
	while (srclgt > i && (dstlgt + i + 1) < dstsize)
	{
		dst[dstlgt + i] = src[i];
		i++;
	}
	dst[dstlgt + i] = '\0';
	return (dstlgt + srclgt);
}
/*
int main(void)
{
    char src[] = "Morning";
    char dst[8] = "Good ";

    printf("With ft_strlcat = %zu\n", ft_strlcat(dst, src, sizeof(dst)));
    printf("Resulting dst = \"%s\"\n", dst);
    return 0;
}
*/
