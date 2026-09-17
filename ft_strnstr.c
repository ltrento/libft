/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:24:49 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/26 18:48:12 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_l;

	len_l = ft_strlen(little);
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (i + j < len && big[i + j] == little[j])
		{
			if (j >= len_l - 1)
				return (&(((char *)big)[i]));
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	*big = "cazzucazzuminghiacazzu";
	char	*little = "minghia";
	size_t	len = 20;

	printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}*/
