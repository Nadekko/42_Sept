/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andjenna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:43:45 by andjenna          #+#    #+#             */
/*   Updated: 2023/09/26 00:57:27 by andjenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_struct
{
	int	x;
	int	y;

} t_struct;

void	set_point(t_point *point);
