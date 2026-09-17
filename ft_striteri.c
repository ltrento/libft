/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:18:50 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/30 18:43:14 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	example_function(unsigned int index, char *c)
{
	*c = (char)(*c + index);
}
int	main(void)
{
	char	s[] = "Hello, World!";
	
	ft_striteri(s, example_function);
	printf ("orginal string: %s\n", s);
	return (0);
}*/
