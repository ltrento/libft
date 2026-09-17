/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:17:34 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/30 17:51:21 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (0);
	while (s1[l])
	{
		s3[i] = s1[l];
		i++;
		l++;
	}
	l = 0;
	while (s2[l])
	{
		s3[i] = s2[l];
		i++;
		l++;
	}
	s3[i] = '\0';
	return (s3);
}
/*int	main(void)
{
	char	*s1 = "ciao ";
	char	*s2 = "come stai";
	char	*s3;

	s3 = ft_strjoin(s1, s2);
	printf ("%s\n", s3);
	return (0);
}*/
