/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:02:08 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/11 14:02:23 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

/*int	main(void)
{
	char	s1[] = "Bonjour";
	char	s2[] = "Bonsoir";
	int	res = ft_strncmp(s1, s2, 3);

	if (res == 0)
		printf("Les deux chaines sont identique.");
	if (res < 0)
		printf("La premiere chaine est inferieur a la seconde.");
	if (res > 0)
		printf("Le premiere chaine est superieur a le seconde.");
	return (0);
}*/
