/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:59:07 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/11 20:27:38 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = ft_strlen(src);i
	while
	while (*src && size)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	*dest = '\0';
	return (len);
}*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
	{
		*dest++ = *(src + len++);
	}
	*dest = '\0';
	while (*(src + len))
		len++;
	return (len);
}

#define CRED "\e[41m"
#define CGRN "\e[42m"
#define CRST "\e[0m"

void	test_it(char *dest, char *src, unsigned int size, unsigned int expected)
{	
	__builtin_printf("Testing with \"%s\", copying to dest with a size of %d\n", src, size);
	unsigned int ret = ft_strlcpy(dest, src, size);

	if (ret !=  size)
	{
		__builtin_printf(CRED "KO: return size doesn't match, got %u, expected %u\n" CRST, ret, size); 
		return;
	}

	int new_len = ft_strlcpy(dest, src, size);

	if (new_len != expected)
	{
		__builtin_printf(CRED "KO: dest size doesn't match, got %u, expected %u\n" CRST, new_len, expected);
		return;
	}

	__builtin_printf(CGRN "OK!\n" CRST);
}

int	main(void)
{
	char dest[150];
	test_it(dest, "Hello, World !", 14, 14);
	/*char	dest[] = "Hello, World !";
	char	src[] = "I'm strlcpy";
	int		size = 13;

	printf("La valeur de dest avant l'appel de la fonction : %s\n", dest);
	ft_strlcpy(dest, src, size);
	printf("La valeur de dest apres l'appel de la fonction : %s\n", dest);*/
	return (0);
}
