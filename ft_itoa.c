/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:49:12 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/30 23:04:05 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

static size_t	ret_str(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	else if (n < 0)
	{
		i = 1;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	long	conv;

	conv = n;
	i = ret_str(conv);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (conv < 0)
	{
		str[0] = 45;
		conv *= -1;
	}
	if (conv == 0)
		str[0] = 48;
	while (conv != 0)
	{
		str[--i] = (conv % 10) + 48;
		conv /= 10;
	}
	return (str);
}
/*int	main(void)
{
	int	n = -2147483648;
	char	*s;

	s = ft_itoa(n);
	printf("%s\n", s);
	return (0);
}*/
