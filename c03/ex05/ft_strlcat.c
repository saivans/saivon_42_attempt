/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:56:06 by stagma            #+#    #+#             */
/*   Updated: 2025/08/25 18:58:43 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	src_dest_len(char *str)
{
	unsigned int	i;

	i = 0 ;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i ;

	l1 = src_dest_len(src) ;
	if (size == 0)
		return l1;
	l2 = 0 ;
	while (dest[l2] && l2 < size)
		l2++;
	if (l2 == size)
		return (l1 + size);
	i = 0 ;
	while (src[i] && i < size - l2 - 1)
	{
		dest[l2 + i] = src[i];
		i++;
	}
	dest[l2 + i] = '\0' ;
	return (l1 + l2);
}
