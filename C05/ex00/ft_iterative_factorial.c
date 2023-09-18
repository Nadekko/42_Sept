/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:34:09 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/17 14:26:31 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (nb >= i)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main()
{
	int	result = ft_iterative_factorial(0);

	printf(" %d", result);
}*/
