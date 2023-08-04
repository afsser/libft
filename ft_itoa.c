/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipenasser <felipenasser@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:25:39 by felipenasse       #+#    #+#             */
/*   Updated: 2023/07/29 14:31:48 by felipenasse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_intlen(long int ln)
{
	int	count;

	count = 0;
	if (ln == 0)
	{
		return (1);
	}
	if (ln < 0)
	{
		ln = -ln;
	}
	while (ln != 0)
	{
		ln = ln / 10;
		count++;
	}
	return (count);
}

static char	*alloc(long int ln, int len)
{
	char	*buffer;

	if (ln < 0)
	{
		buffer = malloc(len + 2);
		buffer[0] = '-';
		buffer[len + 1] = '\0';
	}
	else
	{
		buffer = malloc(len + 1);
		buffer[0] = '0';
		buffer[len] = '\0';
		len--;
	}
	if (!buffer)
		return (NULL);
	else
		return (buffer + len);
}

char	*ft_itoa(int n)
{
	long int	ln;
	char		*ptr;
	int			len;
	int			sign;

	sign = 1;
	ln = n;
	len = ft_intlen(ln);
	ptr = alloc(ln, len);
	if (ln < 0)
	{
		sign = -1;
		ln = -ln;
	}
	while (ln > 9)
	{
		*ptr = (ln % 10) + '0';
		ln /= 10;
		ptr--;
	}
	*ptr = ln + '0';
	if (sign < 0)
		ptr--;
	return (ptr);
}
