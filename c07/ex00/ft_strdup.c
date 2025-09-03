/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 22:58:31 by stagma            #+#    #+#             */
/*   Updated: 2025/09/02 11:44:30 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	if (!src)
		return (NULL);
	i = 0 ;
	while (src[i])
		i++;
	copy = malloc((i + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0 ;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy [i] = '\0' ;
	return (copy);
}
