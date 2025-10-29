/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:24:39 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 16:35:18 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("isalpha(5) = %d\n", ft_isprint('5'));
	printf("isalpha(a) = %d\n", ft_isprint('a'));
	printf("isalpha(''\b'') = %d\n", ft_isprint(8));
	return(0);
}
*/
