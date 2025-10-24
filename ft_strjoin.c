/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:22:47 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/23 17:49:29 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	h;
	char	*s3;

	i = 0;
	j = 0;
	h = 0;
	s3 = (char *) malloc (ft_strlen (s1) + ft_strlen (s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[h] = s1[i];
		i++;
		h++;
	}
	while (s2[j])
	{
		s3[h] = s2[j];
		j++;
		h++;
	}
	s3[h] = '\0';
	return (s3);
}
/*
int main(void)
{   
    char *joined;

    joined = ft_strjoin("Hello ", "World");
    if (!joined)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("s3 string = %s\n", joined);

    free(joined);
    return (0);
}
*/
