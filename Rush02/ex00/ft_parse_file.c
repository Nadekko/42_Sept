/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:49:32 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/24 17:31:41 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RUSH02.h"

int unsigned long	ft_size_dict(char *path_file)
{
	int				fd;
	char			parse;
	unsigned long	size;

	size = 0;
	fd = open(path_file, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Dict Error\n");
		return (0);
	}
	while (read(fd, &parse, 1) > 0)
		size++;
	close(fd);
	return (size);
}

char	*ft_read(char *path_file)
{
	char	*dict;
	int		i;
	int		fd;

	i = 0;
	dict = malloc(sizeof(char) * ft_size_dict(path_file) + 1);
	if (!dict)
		return (NULL);
	fd = open(path_file, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Dict Error\n");
		return (0);
	}
	while (read(fd, &dict[i], 1) > 0)
		i++;
	close(fd);
	dict[i] = '\0';
	return (dict);
}

/*char	*find_key(char *dict, char *key)
{
	char	*start;

	start = dict;
	while ((start = ft_strstr(start, key)))
	{
		if (start[ft_strlen(key)] == ' ')
		{
			start += ft_strlen(key);
			while (*start == ' ')
				start++;
			if (*start == ':')
				return (start + 1); // retourn le position apres ':'
		}
	}
	return (NULL);
}

char	*extract_value(char *start)
{
	char	*end;
	char	*result;

	end = ft_strchr(start, '\n');
	while (*start == ' ') //ignorer les espaces apres ':'
		start++;
	if (!end)
		end = start + ft_strlen(start); // le cas ou c'est la derniere ligne
	result = malloc(end - start + 1);
	if (!result)
		return (NULL);
	ft_strncpy(result, start, end - start);
	result[end - start] = '\0';
	return (0);
}

char	*get_value(char *dict, char *key)
{
	char	*key_start;

	key_start = find_key(dict, key);
	if (!key_start)
		ft_puterror("Dict Error\n");
		return (0);
	return (extract_value(key_start));
}*/
/*int	main()
{
	ft_size_dict("numbers.dict");
	printf("%s", ft_read("numbers.dict"));
	return (0);
}*/
