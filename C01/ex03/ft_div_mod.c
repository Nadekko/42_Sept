/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:09:16 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/07 12:07:24 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a = 20;
	int	b = 3;
	int	div_result, mod_result;

	ft_div_mod(a, b, &div_result, &mod_result);
	printf("Division : %d\n", div_result);
	printf("Modulo   : %d\n", mod_result);
	return (0);
}*/
