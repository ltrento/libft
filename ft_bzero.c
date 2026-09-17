/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:29:36 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/24 18:52:55 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		str[--n] = 0;
	}
}
/*
int	main(void)
{
	char	str[] = "ciao belli";

	printf("before ft_bzero: ");
	for (int i = 0; i < 10; i++)
		printf("%c", str[i]);
	printf("\n");
	ft_bzero(str, 3);
	printf("after ft_bzero: ");
	printf("%s", str);
	printf("\n");
	return (0);
}*/
