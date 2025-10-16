/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:28:36 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/14 19:27:12 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return(1);
	else
		return(0);
}
/*
int	main(void)
{
	printf("isalpha(5) = %d\n", ft_isalnum(5));
	printf("isalpha(a) = %d\n", ft_isalnum('a'));
	printf("isalpha(+) = %d\n", ft_isalnum('+'));
	return(0);
}
*/
