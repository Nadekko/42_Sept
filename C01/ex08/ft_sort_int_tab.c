/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:34:03 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/07 19:36:54 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_ind;

	i = 0;
	while (i < size)
	{
		min_ind = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_ind])
			{
				min_ind = j;
			}
			j++;
		}
		swap(&tab[min_ind], &tab[i]);
		i++;
	}
}

/*int	main(void)
{
	int	tab[10] = {2, 1, 2, 2, 4, 7, 4, 8, 1, 3};

	printf("2, 1, 2, 3, 5, 7, 4, 8, 1, 3\n");
	ft_sort_int_tab(tab, 10);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d",
		tab[0], tab [1], tab[2], tab[3], tab[4],
		tab[5], tab[6], tab[7], tab[8], tab[9]);
	return (0);
}*/
