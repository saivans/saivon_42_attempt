/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:25:10 by stagma            #+#    #+#             */
/*   Updated: 2025/09/02 15:22:57 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL ;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0 ;
	while (min < max)
	{
		(*range)[i] = min ;
		min++;
		i++;
	}
	return (i);
}
