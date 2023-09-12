/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:28:54 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/09 12:46:27 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
	ft_str_is_numeric("")?"OK":"Fail",
	!ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")
		?"OK":"Fail",
	ft_str_is_numeric("0123456789")?"OK":"Fail",
	!ft_str_is_numeric(" ")?"OK":"Fail",
	!ft_str_is_numeric("\\")?"OK":"Fail",
	!ft_str_is_numeric("\n")?"OK":"Fail");
}*/
