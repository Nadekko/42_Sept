/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:53:25 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/12 22:54:16 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <bsd/stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (size == 0)
		return (j + i);
	else
		j += i;
	while (src[k] && (i + 1) < size)
	{
		dest[i++] = src[k++];
	}
	if (i < size)
	dest[i] = '\0';
	return (j);
}

/*int	main(void)
{
	char	s1[100] = "Hello";
	char	s2[] = " World !";
	unsigned int	size = 14;

	printf("%u\n", ft_strlcat(s1, s2, size));
	return (0);
}*/
