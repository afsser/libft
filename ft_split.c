/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasser <nasser@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:57:43 by nasser            #+#    #+#             */
/*   Updated: 2023/08/07 01:13:52 by nasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	trigger;
	int	i;

	trigger = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && !trigger)
		{
			trigger = 1;
			i++;
		}
		else if (*s == c)
		{
			trigger = 0;
		}
		s++;
	}
	return (i);
}

static char	*word_dup(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	word = ft_calloc(sizeof(char), (finish - start + 1));
	if (!word)
	{
		free(word);
		return (0);
	}
	i = 0;
	while (i < finish - start)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	int		start;

	split = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!s || !c || !split || !ft_strlen(s))
		return (0);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0' && start < 0)
			start = i;
		else if ((s[i] == c || s[i] == '\0' || i == ft_strlen(s)) && start >= 0)
		{
			split[j] = word_dup(s, start, i);
			start = -1;
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	txt[] = " ola meus amigos tudo bem com voces o que anda ";
// 	char	div = ' ';
// 	char	**result;
// 	int		i;

// 	result = ft_split(txt, div);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf(" [%s] ", result[i]);
// 		i++;
// 	}
// 	return (0);
// }
	// if (ft_strlen(s) == start)
	// 	return (empty_string());