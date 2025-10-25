/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:50:10 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/25 15:05:40 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	ft_trim(const char *s, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char	*trimmed;

	j = ft_strlen(s1) - 1;
	i = 0;
	l = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_trim(set, s1[i]))
		i++;
	while (ft_trim(set, s1[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	trimmed = malloc ((j - i + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (i <= j)
	{
		trimmed[l] = s1[i];
		i++;
		l++;
	}
	trimmed[l] = '\0';
	return (trimmed);
}

static int	ft_trim(const char *s, char c)
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
