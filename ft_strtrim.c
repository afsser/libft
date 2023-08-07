/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasser <nasser@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:25:29 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/08/05 21:10:32 by nasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, "", 1);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	if (ft_strlen(s1) == start)
		return (empty_string());
	end = ft_strlen(s1) - 1;
	while (end > 0 && ft_strchr(set, s1[end]))
	{
		end--;
	}
	ptr = ft_calloc(end - start + 2, sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, &s1[start], end - start + 2);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "   &  &mas que p&tifaria ein& ";
// 	char	set[] = " &";

// 	printf("%s", ft_strtrim(s1, set));
// 	return (0);
// }
