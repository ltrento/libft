/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:54:34 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/30 17:17:04 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = -1;
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	s += start;
	if (ft_strlen(s) <= len)
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[++i] && i < len)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
/*int	main(void)
{
	char	*s = "che minghia guaddi";
	char	*str = ft_substr(s, 4, 7);

	printf("%s\n", str);
	return (0);
}*/
