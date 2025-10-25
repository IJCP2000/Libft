/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:04:12 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/25 17:25:20 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// s -> string wt the words
// c -> delimitador
char **ft_split(const char *s, char c)
{
	unsigned char *
   /* allocate an array big enough to hold all the words in s */
   /* loop over the string and find the start of the word */
      /* find the end of the word */
         /* copy the world at the first free index in our words array */
   /* return our words array */
}

int word_count(/* whatever parameter you need */)
{
	size_t	i;
	unsigned char	count;

	count = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] == c)
		{
			count++;
			while(s[i] == c)
				i++;
		}
		i++;
	}
	return (count);
   /* find and return the number of words in the string */
}

void ft_free(/* whatever argument you need */)
{
   /* free EVERYTHING you allocated */
   /* each element of the array as well as the array */
}

char *fill_word(/* whatever argument you need */)
{
   /* allocate enough room for the word */
   /* copy the word into the memory you allocated above */
   /* return the allocated word */
}
