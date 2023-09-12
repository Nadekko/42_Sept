/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 00:02:12 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/12 17:05:56 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= 1)
		return (i + j);
	else
		j += i;
	while (src[k] && (i + 1) < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j);
}*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	dstlen;
	char	*ptr;
	
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	if (size == 0)
		return (srclen);
	if (size <= dstlen)
		return (size + srclen);
	return (srclen + dstlen);
}

int	main(void)
{
	char	s1[100] = "Hello";
	char	s2[] = " World !";
	unsigned int	size = 14;

	printf("%u\n", ft_strlcat(s1, s2, size));
	return (0);
}
