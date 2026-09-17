/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrento <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:31:19 by ltrento           #+#    #+#             */
/*   Updated: 2023/11/04 17:25:49 by ltrento          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar_fd(45, fd);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd((nbr / 10), fd);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_putchar_fd((nbr + 48), fd);
}
/*int	main(void)
{
	int	n = -2147483648;
	int	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}*/
