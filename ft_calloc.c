/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:19:36 by ltrento           #+#    #+#             */
/*   Updated: 2023/10/29 22:20:26 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > ULONG_MAX / nmemb)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*int	main(void)
{
	size_t	num_elements = 5;
	size_t	element_size = sizeof(int);
	int	*arr = (int *)ft_calloc(num_elements, element_size);
	
	if (arr)
	{
		for (size_t i = 0; i < num_elements; i++)
		{
			printf("arr[%zu] = %d\n", i, arr[i]);
		}
		free(arr);
	}
	else
	{
		printf("memory allocation failes.\n");
	}
	return (0);
}*/
