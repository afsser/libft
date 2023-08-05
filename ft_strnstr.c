/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasser <nasser@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:16:23 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/08/05 20:53:50 by nasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	l_len;

	count = 0;
	l_len = ft_strlen(little);
	if (little[0] == '\0')
		return (big);
	while (*big && count < len)
	{
		i = 0;
		while (big[i] && big[i] == little[i] && count + i < len)
		{
			i++;
			if (i == l_len)
				return (big);
		}
		count++;
		big++;
	}
	return ((void *)0);
}
