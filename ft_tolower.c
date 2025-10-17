/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:07:04 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/17 18:18:59 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{	
	printf(" ogf lowercase = %d\n", tolower('a'));
	printf(" toupper lowercase = %d\n", ft_tolower('a'));
	printf(" ogf Upper-case = %d\n", tolower('P'));
	printf(" Upper-case = %d\n", ft_tolower('P'));
	printf(" ogf neither = %d\n", tolower('0'));
	printf(" neither = %d\n", ft_tolower('0'));
	return(0);
}
*/
