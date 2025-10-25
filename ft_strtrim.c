/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:50:10 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/25 15:32:13 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	ft_in_set(const char *s, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = strlen(s1);
	while (s1[start] && ft_in_set(set, s1[start]))
		start++;
	while (end > start && ft_in_set(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = malloc (len + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}

static int	ft_in_set(const char *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c))
			return (1);
		i++;
	}
	if ((s[i] == c))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char s1[] = "ababaaaMy name is Simonbbaaabbad";
	char set[] = "abd";

	printf("BEFORE TRIM\n");
	printf("%s\n\n", s1);

	char *trimmed = ft_strtrim(s1, set);
	printf("AFTER TRIM\n");
	printf("%s\n", trimmed);
	free (trimmed);
	trimmed = NULL;
	return (0);
}
*/
