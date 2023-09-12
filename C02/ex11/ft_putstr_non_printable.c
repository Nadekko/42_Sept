/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:52:50 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/11 19:03:49 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			ft_putchar('\\');
			a = str[i] / 16;
			b = str[i] % 16;
			ft_putchar("0123456789abcdef"[a]);
			ft_putchar("0123456789abcdef"[b]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	printf("%s\n", str);
	ft_putstr_non_printable(str);
}*/
