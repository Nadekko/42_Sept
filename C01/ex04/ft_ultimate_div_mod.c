/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:32:57 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/07 12:06:14 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	md;

	md = *a;
	*a = *a / *b;
	*b = md % *a;
}

/*int	main(void)
{
	int	a = 20;
	int	b = 3;
	
	printf("Avant appel à ft_ultimate_div_mod:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	ft_ultimate_div_mod(&a, &b);
	printf("Après appel à ft_ultimate_div_mod:\n");
	printf("a (résultat de la division) = %d\n", a);
	printf("b (résultat du modulo) = %d\n", b);
	return (0);
}*/
