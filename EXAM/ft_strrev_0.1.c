/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_0.1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:56:31 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/26 19:59:56 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (j < i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	(void)ac;
	char	*str = ft_strrev(av[1]);
	printf("%s", str);
	return (0);
}
