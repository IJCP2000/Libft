/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:43:53 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 20:11:40 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	cstart;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	cstart = (size_t) start;
	if (cstart >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - cstart)
		len = ft_strlen(s) - cstart;
	ss = malloc((len + 1) * sizeof(char));
	if (!ss)
		return (NULL);
	while (i < len && s[cstart] != '\0')
	{
		ss[i] = s[cstart];
		i++;
		cstart++;
	}
	ss[i] = '\0';
	return (ss);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("Bonjour comment ca va?", 5, 8));
	return (0);
}
*/
