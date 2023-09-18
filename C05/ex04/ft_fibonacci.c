/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:48:15 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/17 14:58:24 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_fibonacci(3));
	return (0);
}*/

/*int	main()
{
	int	n;
	int	i;
	int	j;

	i = 0;
	printf("Entrez le nombre de termes\n");
	scanf("%d", &n);
	printf("Les %d premiers termes de la serie de Fibonacci sont :\n", n);
	for (j = 1; j <= n; j++)
	{
		printf("%d\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}*/
