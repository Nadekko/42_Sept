/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:27:58 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/24 17:29:35 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RUSH02.h"

int	main(void)
{
	char	*str;

	str = ft_read("numbers.dict");
	ft_size_dict("numbers.dict");
	ft_putstr(str);
	return (0);
}
/*if (ac < 2 || ac > 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (ac == 2)
	{
		dict = "numbers.dict";
		num = (av[1]);
	}
	else
	{
		num = av[2];
		dict = av[1];
	}
	if (num < 0)
	{
		ft_puterror("Error\n");
		return (0);
	}*/
