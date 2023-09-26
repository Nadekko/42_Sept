/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_sqrt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:37:38 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/17 17:01:22 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_wrap(int n, int min, int max)
{
	int	a;
	int	b;

	if (max < min)
		return (-1);
	a = (min + max) / 2;
	b = a * a;
	if (b == n)
		return (a);
	else if (b < n)
		return (sqrt_wrap(n, a + 1, max));
	else
		return (sqrt_wrap(n, min, a - 1));
}

int	ft_recursive_sqrt(int n)
{
	return (sqrt_wrap(n, 1, n));
}

/*#include <stdio.h>

int	main()
{
	int	n;

	printf("Enter a non-negative integer: ");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Input must be a non-negative integer.\n");
		return 1;
	}
	int result;
	
	result = ft_recursive_sqrt(n);
	if (result == -1)
		printf("No integer square root found for %d.\n", n);
	else
		printf("Integer square root of %d is %d.\n", n, result);
	return 0;
}*/
