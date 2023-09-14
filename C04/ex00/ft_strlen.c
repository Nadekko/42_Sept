/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:52:40 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/11 12:56:53 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*int	main(int	argc, char **argv)
{
	char	*str = argv[1];
	int	len = ft_strlen(str);

	printf("La valeur de la chaine \"\%s\" est : %d", str, len);
	return (0);
}*/
