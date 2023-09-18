/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:46:40 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/18 20:49:45 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min > max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min + 1));
	while (i < (max - min + 1))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*int	main()
{
	int	min = 0;
	int	max = 100;

	int	*result = ft_range(min, max);

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
}*/
