/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:55:30 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/09 13:01:13 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	c;

	c = 1;
	while (c != 0)
	{
		if ((c < ' ' || c > '~') == ft_str_is_printable(&c))
		{
			printf("Fail for char in decimal: %d\n", (int)c);
			return (0);
		}
		c++;
	}
	printf("Success\n");
}*/
