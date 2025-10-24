/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-carv <ide-carv@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:50:10 by ide-carv          #+#    #+#             */
/*   Updated: 2025/10/23 20:40:27 by ide-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	while(s1[j] || set[i])
	{
		while(set[i] == s1[j])
			j++;
		while(set[i] != s1[j] || set[i])
			i++;
	
	}
}
