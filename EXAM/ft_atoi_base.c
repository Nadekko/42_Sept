/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:13:37 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/26 19:41:37 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1(;
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
	baslen = ft_strlen(base);
	if (baselen < 2)
		return (1);
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+')
			|| (( base[i] >= 0 && base[i] <= 32) || (base[i] == 126)))
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

int	get_index(char c)
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
	int	res;
	int	neg;

	i = 0;
	res = 0;
	neg = 1;
	if (ft_base_invalid(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] && get_index(str[i], base) >= 0)
	{
		res = res * ft_strlen(base) + get_index(str[i], base);
		i++;
	}
	return (res * neg);
}
