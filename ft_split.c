/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:24:00 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 15:49:17 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_partial(char **res, int filled)
{
	while (filled > 0)
		free(res[--filled]);
	free(res);
}

static int	fill_words(char **res, const char *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[j] = word_dup(s, start, i);
			if (!res[j])
				return (free_partial(res, j), 0);
			j++;
		}
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		count;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	if (!fill_words(res, s, c))
		return (NULL);
	return (res);
}
/*
int main(int argc, char **argv)
{
    char **strs;
    int i;
        if (argc == 3)
        {
            // Call ft_split with the provided arguments
            strs = ft_split(argv[1], argv[2][0]);
            i = 0;
            while (strs[i] != NULL)
            {
                printf("string %d: %s\n", i, strs[i]);
                free(strs[i]);
                i++;
            }
        }
        else
                return (0);
    // Free the array of pointers itself
    free(strs);
    return (0);
}
*/
