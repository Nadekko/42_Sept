/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:40:43 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/08 13:51:33 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	int	lengh = ft_strlen(str);

	printf("La longeur de la chaine \"\%s\" est de : %d", str, lengh);
	return (0);
}
