/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RUSH02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:12:15 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/24 18:12:30 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

unsigned long int	ft_size_dict(char *path_file);
char				*ft_read(char *path_file);
void				ft_puterror(char *err);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
//char				*ft_strncpy(char *dest, char *src, unsigned int n);
//char				*ft_strstr(char *str, char *key);
//char				*ft_strchr(char *str, int c);

#endif
