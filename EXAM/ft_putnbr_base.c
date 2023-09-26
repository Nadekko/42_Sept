/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:33:42 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/26 19:06:56 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
		len++;
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
	int	baselen;

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

int	main(int ac, char **av)
{
	char	*basesymbols;
	int	n;

	(void)ac;
	n = atoi(av[1]);
	basesymbols = av[2];
	ft_putnbr_base(n, basesymbols);
	return (0);
}


