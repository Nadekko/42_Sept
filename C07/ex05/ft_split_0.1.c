/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:42:03 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/21 15:11:15 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*int	ft_count_words(char *str,char charsep)
{
	int	i;
	int	count;

	if (str == 0 || str[0] == 0)
		return (0);

	i = 1;
	count = 0;
	if (str[i] != charsep)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] != charsep && str[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}*/



char	*ft_strchr(char *str, int c)
{
	int	i;
	char	*temp;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			temp = &str[i];
			return (temp);
		}
		i++;
	}
	return (NULL);
}

char	**ft_split(char *str, char *charset)
{
	int	len_str;
	int	*count;
	int	i;
	int	old_i;
	char	**strs;

	i = 0;
	*count = 0;
	len_str = ft_strlen(str);
	while (i < len_str)
	{
		if (ft_strchr(charset, str[i]) == NULL)
			break;
		i++;
	}
	old_i = i;
	while (i < len_str)
	{
		if (ft_strchr(charset, str) != NULL)
			break;
		i++;
	}
	if (i > old_i)
		*count += 1;
	**strs = moalloc(sizeof(char *) * *count);
	i = 0;
	while (i < len)
	{
		if(ft_strchr(charset, str[i] == NULL)
			break;
		i++;
	}

