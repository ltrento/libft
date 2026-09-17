/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:09:57 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/26 16:17:16 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	size_t		i;
	char		*start;

	str = (char *)s;
	start = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i--;
	}
	if (start == str && (unsigned char)*start != (unsigned char)c)
		return (NULL);
	return (&str[i]);
}
/*int main(void)
{
	char	str[10] = "cazzucazzu";
	int	c = 122;

	printf("%s\n", ft_strrchr(str, c));
	return (0);
}*/
