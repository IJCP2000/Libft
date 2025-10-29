/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:57:49 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 19:51:49 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rst;

	i = 0;
	rst = (char *) malloc ((ft_strlen(s) + 1) * sizeof (char));
	if (!rst)
		return (NULL);
	while (i < ft_strlen(s))
	{
		rst[i] = (*f)(i, s[i]);
		i++;
	}
	rst[i] = '\0';
	return (rst);
}
/*
char example_func(unsigned int i, char c)
{   
    (void)i; // ignore unused variable warning
    return c + 1;  // Example: shift each character by 1.
}

// Main function to test
int main() 
{
    char *str = "Hello, World!";
    char *result = ft_strmapi(str, example_func);

    if (result) {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        free(result);  // Don't forget to free the memory
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
*/
