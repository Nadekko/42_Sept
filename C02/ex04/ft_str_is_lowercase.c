/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:47:08 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/09 12:50:49 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
	ft_str_is_lowercase("")?"OK":"Fail",
	ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
	!ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")
		?"OK":"Fail",
	!ft_str_is_lowercase("0123456789")?"OK":"Fail",
	!ft_str_is_lowercase(" ")?"OK":"Fail",
	!ft_str_is_lowercase("\\")?"OK":"Fail",
	!ft_str_is_lowercase("\n")?"OK":"Fail");
}*/
