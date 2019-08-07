/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_b_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 17:33:42 by jlagos            #+#    #+#             */
/*   Updated: 2019/07/30 17:34:49 by jlagos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft_1/libft.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Research on the algorithm from PDF
int		main(int ac, char **ag)
{
	if (ac == 5)
	{
		unsigned int x1, x2, y1, y2;
		unsigned int d_x, d_y;
		float	m, error_b;

		x1 = ft_atoi(ag[1]);
		x2 = ft_atoi(ag[2]);
		y1 = ft_atoi(ag[3]);
		y2 = ft_atoi(ag[4]);
		d_y = y2 - y1;
		d_x = x2 - x1;
		m = (float) d_y / d_x;
		error_b = m - 1;
		printf("d_y: %u, d_x: %u\n", d_y, d_x);
		printf("m: %f\n", m);
		printf("Illuminate pixel at (%u, %u)\n", x1, y1);
		if (abs(d_x) >= abs(d_y))
		{
			while (x1 < x2 - 1)
			{
				x1++;
				error_b += m;
				if (error_b > 0)
				{
					printf("Illuminate pixel at (%u, %u)\n", x1, y1);
					y1++;
					error_b--;
				}
				else
					printf("Illuminate pixel at (%u, %u)\n", x1, y1);
			}	
				
		}
	}
	printf("\n");
	return (0);
}
