/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:53:05 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/09 12:28:02 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	ft_str_is_alpha("")?"OK":"Fail",
	ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")
			?"OK":"Fail",
	!ft_str_is_alpha("1")?"OK":"Fail",
	!ft_str_is_alpha(" ")?"OK":"Fail",
	!ft_str_is_alpha("\\")?"OK":"Fail",
	!ft_str_is_alpha("\n")?"OK":"Fail");
}*/

/*int	main(int argc, char **argv)
{
	char	*str = argv[1];

	ft_str_is_alpha(str);
	return (0);
}*/
