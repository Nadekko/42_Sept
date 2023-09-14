/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:33:22 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/07 15:32:03 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*int	main(void)
{
	int	tab[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};

	printf("0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n");
	ft_rev_int_tab(tab, 10);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d",
		tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5], tab[6], tab[7], tab[8], tab[9]);
	return (0);
}*/
