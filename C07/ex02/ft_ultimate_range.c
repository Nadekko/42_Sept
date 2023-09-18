/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:13:36 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/18 20:34:34 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min > max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!tab)
		return (-1);
	while (i < (max - min) + i)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

int	main()
{
	int	min = 0;
	int	max = 100;
	int	**range;

	int	*result = ft_ultimate_range(min, max, **range);

	if (result == NULL)
	{
		printf("Allocation memoirAllocation mémoire échouée ou min >= max\n");
		return (1);
	}
	printf("Tableau généré : ");
	for (int i = 0; i < (max - min + 1); i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");

	free(result);
	return (0);
}
