/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasaha <malasaha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:58:50 by eguler            #+#    #+#             */
/*   Updated: 2022/09/29 13:42:04 by malasaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(double n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + 48, fd);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}
/*
int main()
{
	int	i;
	int fd;
	fd = 1;
	i = 456;
	ft_putnbr_fd(i, fd);
}
*/
