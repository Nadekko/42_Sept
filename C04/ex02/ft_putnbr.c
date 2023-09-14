/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:06:03 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/14 02:55:01 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	ln;

	ln = nb;
	if (ln < 0)
	{
		ft_putchar('-');
		ln *= -1;
	}
	if (ln < 10)
	{
		ft_putchar(ln + 48);
	}
	else
	{
		ft_putnbr(ln / 10);
		ft_putchar(ln % 10 + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
