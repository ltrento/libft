/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:58:22 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/30 18:17:38 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char	example_function(unsigned int index, char c)
{
	return (c + index);
}
int	main(void)
{
	char	*s = "Hello, World!";
	char	*result = ft_strmapi(s, example_function);

	if (result)
	{
		printf("original string: %s\n", s);
		printf("mapped string: %s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}*/
