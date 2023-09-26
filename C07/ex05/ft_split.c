/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:59:38 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/26 13:34:45 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_is_charset(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_charset(charset, str[i]))
		i++;
	return (i);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && !ft_is_charset(charset, str[i]))
			i++;
		else
		{
			count++;
			while (str[i] && !ft_is_charset(charset, str[i]))
				i++;
		}
	}
	return (count);
}

char	*ft_word(char *str, char *charset)
{
	char	*word;
	int		word_len;
	int		i;

	i = 0;
	word_len = ft_word_len(str, charset);
	word = malloc(sizeof(char) * word_len + 1);
	if (!word)
		return (NULL);
	while (str[i] && !ft_is_charset(charset, str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (!words)
		return (NULL);
	while (str[i])
	{
		if (str[i] && !ft_is_charset(charset, str[i]))
			i++;
		else
		{
			words[j] = ft_word(&str[i], charset);
			j++;
			while (str[i] && !ft_is_charset(charset, str[i]))
				i++;
		}
	}
	words[i] = NULL;
	return (words);
}

