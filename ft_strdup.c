/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:57:50 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 16:45:19 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char s[] = "Lores Opsum";
	char *s2 = ft_strdup(s);
	char *s3 = strdup(s);
	printf("ft_strdup = %s\n", s2);
	printf("strdup = %s\n", s3);
	return (0);
}
*/
