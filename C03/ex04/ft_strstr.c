/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 23:49:53 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/11 00:00:19 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	else
		return (0);
}

/*int	main(void)
{
	char	str[20] = "bateau";
	char	to_find[] = "eau";
	char	*res = ft_strstr(str, to_find);

	if (res != NULL)
		printf("Substring found : %s\n", res);
	else
		printf("Substring not found.\n");
	return (0);
}*/
