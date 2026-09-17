/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:40:41 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/30 16:48:27 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s1 == 0)
	{
		while (i > 0)
		{
			free(&s1[i]);
			i--;
		}
		return (NULL);
	}
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
