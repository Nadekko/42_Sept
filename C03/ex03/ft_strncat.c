/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:39:54 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/11 00:38:59 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src && nb > 0)
	{
		*ptr = *src;
		src++;
		ptr++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[] = " World !";
	int	nb = 13;

	ft_strncat(str1, str2, nb);
	printf("str1 : %s\n", str1);
	return (0);
}*/
