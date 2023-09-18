/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:13:36 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/18 20:50:01 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!tab)
		return (-1);
	while (i < (max - min + 1))
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

/*int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 50));
	while (i < 56)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
