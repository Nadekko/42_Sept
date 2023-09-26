/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:42:16 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/25 16:52:48 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

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
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
		total_len += ft_strlen(strs[i++]) + sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		total_len;
	int		i;

	total_len = ft_total_len(size, strs, sep);
	if (size == 0)
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = malloc(sizeof(char) * (total_len + 1));
	if (!new_str)
		return (NULL);
	ft_strcpy(new_str, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(new_str, sep);
		ft_strcat(new_str, strs[i++]);
	}
	new_str[total_len] = '\0';
	return (new_str);
}

/*int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n", ft_strjoin(argc, argv, "___"));
}*/
