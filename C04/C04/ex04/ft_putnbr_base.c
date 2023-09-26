/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:49:55 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/20 02:14:08 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_base_invalid(char *base)
{
	int	i;
	int	j;
	int	baselen;

	i = 0;
	j = 0;
	baselen = ft_strlen(base);
	if (baselen < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			baselen;

	n = nbr;
	baselen = ft_strlen(base);
	if (ft_base_invalid(base))
		return ;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= baselen)
		ft_putnbr_base(n / baselen, base);
	ft_putchar(base[n % baselen]);
}

int	main(int argc, char **argv)
{
	char	*basesymbols;
	int		n;

	(void)argc;
	n = atoi(argv[1]);
	basesymbols = argv[2];
	ft_putnbr_base(n, basesymbols);
	return (0);
}
