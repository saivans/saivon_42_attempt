/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:38:04 by stagma            #+#    #+#             */
/*   Updated: 2025/09/02 23:14:10 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0 ;
	j = 0 ;
	while (j < size)
	{
		i = 0 ;
		while (strs[j][i])
		{
			i++;
			len++;
		}
		j++;
	}
	i = 0 ;
	while (sep[i])
		i++;
	return (len + i * (size - 1));
}

char	*ft_concat(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0 ;
	k = 0 ;
	while (i < size)
	{
		j = 0 ;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0 ;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0' ;
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0' ;
		return (result);
	}
	len = ft_len(size, strs, sep);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	return (ft_concat(result, strs, sep, size));
}
