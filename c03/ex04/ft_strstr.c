/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 20:57:09 by stagma            #+#    #+#             */
/*   Updated: 2025/08/25 15:54:40 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	j = 0 ;
	while (str[j] != '\0')
	{
		i = 0 ;
		while (to_find[i] != '\0' && str[j + i] != '\0' 
			&& to_find[i] == str[j + i])
			i++;
		if (to_find[i] == '\0')
			return (str + j);
		j++;
	}
	return (NULL);
}
