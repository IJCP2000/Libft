/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:00:12 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/17 19:48:38 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*rslt;
	char	cc;

	cc = (char) c;
	rslt = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			rslt = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		rslt = (char *)&s[i];
	return (rslt);
}
/*
int	main(void)
{
	char	s[] = "Far Cry";
	printf("strrchr = %s\n", strrchr(s, 'C'));
	printf("ft_strrchr = %s\n", ft_strrchr(s, 'C'));
	printf("strrchr = %s\n", strrchr(s, 't'));
	printf("ft_strchr = %s\n", ft_strrchr(s, 't'));
	printf("strrchr = %s\n", strrchr(s, '\0'));
	printf("ft_strchr = %s\n", ft_strrchr(s, '\0'));
	return (0);
}
*/
