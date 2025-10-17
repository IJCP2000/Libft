/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:23:19 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/17 18:19:52 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int	c;
	c = 0;
	printf(" ogf lowercase = %d\n", toupper('a'));
	printf(" toupper lowercase = %d\n", ft_toupper('a'));
	printf(" ogf Upper-case = %d\n", toupper('P'));
	printf(" Upper-case = %d\n", ft_toupper('P'));
	printf(" ogf neither = %d\n", toupper('0'));
	printf(" neither = %d\n", ft_toupper('0'));
	return(0);
}
*/
