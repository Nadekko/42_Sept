/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:53:48 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/20 02:11:24 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
		if ((base[i] == '-') || (base[i] == '+')
			|| ((base[i] >= 0 && base[i] <= 32) || (base[i] == 126)))
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

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (ft_base_invalid(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && get_index(str[i], base) >= 0)
	{
		result = result * ft_strlen(base) + get_index(str[i], base);
		i++;
	}
	return (result * sign);
}
int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi_base(av[1], av[2]));
}
/*int	main(int argc, char **argv)
{
	char	*basesymbols;
	char	*nbr;
	int	result;

	nbr = argv[1];
	basesymbols = argv[2];
	result = ft_atoi_base(nbr, basesymbols);
	printf("Le resultat est de : %d\n", result);
	return (0);
}*/

/*int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}*/
