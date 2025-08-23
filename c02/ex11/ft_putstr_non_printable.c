/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:29:31 by stagma            #+#    #+#             */
/*   Updated: 2025/08/23 13:31:33 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str)
	{
		if ((*str >= 0 && *str < 32) || (*str > 126))
		{
			c = (unsigned char)*str;
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[c / 16], 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
