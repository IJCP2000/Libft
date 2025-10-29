/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:16:48 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 16:19:20 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("isdigit(7) = %d\n", ft_isdigit(7));
	printf("isdigit(d) = %d\n", ft_isdigit('d'));
}
*/
