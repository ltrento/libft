/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:35:17 by ltrento           #+#    #+#             */
/*   Updated: 2023/11/01 23:39:06 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

static int	ft_checkset(char const *set, char const c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;

	i = 0;
	while (s1[i] && ft_checkset(set, s1[i]))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_checkset(set, s1[i - 1]))
		i--;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		str[i - 1] = s1[i - 1];
		i--;
	}
	return (str);
}
/*int	main(void)
{
	char	*s1 = "blblblbcazzucazzufgfgfggfg";
	char	*set = "blfg";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
