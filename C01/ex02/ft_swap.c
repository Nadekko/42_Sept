/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:31 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/07 12:06:47 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

/*int	main(void)
{
	int	a = 3;
	int	b = 10;

	printf("Avant l'appel a ft_swap :\n");
	printf("a : %d\n", a);
	printf(" b : %d\n", b);

	ft_swap(&a, &b);

	printf("Apres avoir appele ft_swap :\n");
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	return (0);
}*/
