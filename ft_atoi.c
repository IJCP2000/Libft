/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:50:31 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/28 20:05:30 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	box;
	int	sign;

	i = 0;
	box = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		box = (box * 10) + (str[i] - '0');
		i++;
	}
	return (box * sign);
}
/*
int	main(void)
{
	printf("TEST 1\n");
	printf("ft_atoi = %d\n", ft_atoi("--2147483648"));
	printf("atoi = %d\n\n", atoi("--2147483648"));

	printf("TEST 2\n");
	printf("ft_atoi = %d\n", ft_atoi("    2147483647"));
	printf("atoi = %d\n\n", atoi("    2147483647"));

	return (0);
}
*/
