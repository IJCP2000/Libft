/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:53:13 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/29 17:02:50 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conv(int len)
{
	char	*temp;

	temp = malloc (len + 1 * sizeof(char));
	if (!temp)
		return (NULL);
	return (temp);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*result;
	int		i;

	nbr = n;
	len = int_len(nbr);
	result = pre_conv(len);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	if (nbr == 0)
		result[i] = '0';
	while (nbr != 0)
	{
		result[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	return (result);
}
/*
int	main(void)
{
	int	n = 0;

	printf("int value og : %d\n", n);
	printf("int value converted with ft_atoi : %s\n", ft_itoa(n));
	free(ft_itoa(n));
	return (0);
}
*/
