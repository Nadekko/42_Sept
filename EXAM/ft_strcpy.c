/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:54:02 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/15 14:01:52 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
/*#include <stdio.h>

int main()
{
	char	s1[] = "ono";
	char	*s2 = "ana";

	ft_strcpy(s1, s2);
	printf("%s", s1);
	return (0);
}*/
