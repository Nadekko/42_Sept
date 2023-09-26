/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:02:49 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/18 16:56:21 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;
	char	*dup;

	len = ft_strlen(src);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	dup = ptr;
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dup);
}

/*int	main()
{
	char	str[10] = "Hello";
	char	*ptr;


	printf("The first string is : %s\n", str);
	ptr = ft_strdup(str);
	printf("The duplicated string is : %s\n", ptr);
	free(ptr);
}*/

/*int	main(int argc, char **argv)
{
	char	*src;
	char	*dup;

	if (argc == 2)
	{
		src = ft_strdup(argv[1]);
		dup = strdup(argv[1]);
		printf(":%s:\n:%s:\n", src, dup);
	}
	free(ptr);
	return (0);
}*/
