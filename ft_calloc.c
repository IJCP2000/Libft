/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:40:57 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/23 14:50:41 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nelmts, size_t size)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)malloc(nelmts * size);
	if (!mem)
		return (NULL);
	while (i < (nelmts * size))
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
/*
int	main(void)//ft_calloc test
{
	int i;
	char s[] = "Hello World";
	unsigned char *ss;
	ss = ft_calloc(strlen(s) + 1,sizeof(char));
	if (!ss)
	{
		printf("Failled allocation memmory");
		return (1);
	}
	i = 0;
	while (s[i])
	{
		ss[i] = s[i];
		i++;
	}
	printf("ft_calloc : %s\n", ss);
	free (ss);
	return (0);
}
*/
/*
int	main(void)//calloc test
{
	int i;
	char s[] = "Hello World";
	unsigned char *ss;
	ss = calloc(strlen(s) + 1,sizeof(char));
	if (!ss)
	{
		printf("Failled allocation memmory");
		return (1);
	}
	i = 0;
	while (s[i])
	{
		ss[i] = s[i];
		i++;
	}
	printf("calloc : %s\n", ss);
	free (ss);
	return (0);
}
*/
