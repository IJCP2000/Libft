/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:29:20 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/14 20:00:58 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("isalpha(5) = %d\n", ft_isascii(5));
	printf("isalpha(a) = %d\n", ft_isascii('a'));
	printf("isalpha(Z) = %d\n", ft_isascii('Z'));
	printf("isalpha(129) = %d\n", ft_isascii(129));
	return(0);
}
*/
