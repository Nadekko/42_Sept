/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:58:03 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/11 16:04:54 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	*str = "coucou";

	ft_putstr(str);
	return (0);
}*/

/*int	main(int argc, char **argv)
{
	int	i = 1;

	if (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}*/
