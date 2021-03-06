/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_bonus2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 19:24:43 by mpinson           #+#    #+#             */
/*   Updated: 2017/09/07 19:24:44 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

void	ft_init_frac3(t_gen *g, int i)
{
	g->x1 = -1;
	g->x2 = 1;
	g->y1 = -1.2;
	g->y2 = 1.2;
	g->zoom = 200;
	g->image_x = W;
	g->image_y = H;
	g->nbr_fract = i;
	g->red = 198;
	g->green = 42;
	g->blue = 11;
	g->zoom_mou = 0;
	g->s_x = 0;
	g->s_y = 0;
	g->x = 0;
	g->y = 0;
	g->c_r = 0.382;
	g->c_i = 0.178;
	ft_frac1(g);
}

void	ft_init_frac4(t_gen *g, int i)
{
	g->x1 = -1;
	g->x2 = 1;
	g->y1 = -1.2;
	g->y2 = 1.2;
	g->zoom = 200;
	g->image_x = W;
	g->image_y = H;
	g->nbr_fract = i;
	g->red = 198;
	g->green = 42;
	g->blue = 11;
	g->zoom_mou = 0;
	g->s_x = 0;
	g->s_y = 0;
	g->x = 0;
	g->y = 0;
	g->c_r = 0.008;
	g->c_i = 0.688;
	ft_frac1(g);
}

void	ft_init_frac5(t_gen *g, int i)
{
	g->x1 = -1;
	g->x2 = 1;
	g->y1 = -1.2;
	g->y2 = 1.2;
	g->zoom = 200;
	g->image_x = W;
	g->image_y = H;
	g->nbr_fract = i;
	g->red = 198;
	g->green = 42;
	g->blue = 11;
	g->zoom_mou = 0;
	g->s_x = 0;
	g->s_y = 0;
	g->x = 0;
	g->y = 0;
	g->c_r = 0.252;
	g->c_i = 0.524;
	ft_frac1(g);
}

void	ft_init_frac1(t_gen *g, int i)
{
	g->x1 = -1;
	g->x2 = 1;
	g->y1 = -1.2;
	g->y2 = 1.2;
	g->zoom = 200;
	g->image_x = W;
	g->image_y = H;
	g->nbr_fract = i;
	g->red = 198;
	g->green = 42;
	g->blue = 11;
	g->zoom_mou = 0;
	g->s_x = 0;
	g->s_y = 0;
	g->x = 0;
	g->y = 0;
	g->c_r = 0.26;
	g->c_i = 0.00;
	ft_frac1(g);
}

void	ft_init_frac2(t_gen *g, int i)
{
	g->x1 = -1;
	g->x2 = 1;
	g->y1 = -1.2;
	g->y2 = 1.2;
	g->zoom = 200;
	g->image_x = W;
	g->image_y = H;
	g->nbr_fract = i;
	g->red = 198;
	g->green = 42;
	g->blue = 11;
	g->zoom_mou = 0;
	g->s_x = 0;
	g->s_y = 0;
	g->x = 0;
	g->y = 0;
	g->c_r = 0.36;
	g->c_i = 0.642;
	ft_frac1(g);
}
