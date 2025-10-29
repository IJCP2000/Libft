/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:22:05 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 15:47:43 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	i = 0;
	cc = (char) c;
	while (s[i] != '\0')
	{
		if ((s[i] == cc))
			return ((char *)&s[i]);
		i++;
	}
	if ((s[i] == cc))
		return ((char *) &s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Far Cry";
	printf("strchr = %s\n", strchr(s, 'C'));
	printf("ft_strchr = %s\n", ft_strchr(s, 'C'));
	printf("strchr = %s\n", strchr(s, 't'));
	printf("ft_strchr = %s\n", ft_strchr(s, 't'));
	printf("strchr = %s\n", strchr(s, '\0'));
	printf("ft_strchr = %s\n", ft_strchr(s, '\0'));
	return (0);
}
*/
