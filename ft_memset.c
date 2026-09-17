/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:50:07 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/24 22:18:13 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*int	main(void)
{
	char	str[10] = "0123456789";

	ft_memset(str, 129, 10);
	printf("custom ft_memset: %s\n", str);
	printf("%d\n", str[1]);
	if (strcmp(str,str1) == 0)
		printf("both functions produced same result.\n");
	else
		printf("the functions produced different results.\n");
	return (0);
}*/
