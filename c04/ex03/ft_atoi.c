/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:58:35 by stagma            #+#    #+#             */
/*   Updated: 2025/08/27 18:20:02 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power_10(int nb)
{
	if (nb == 1)
		return (10);
	else if (nb == 0)
		return (1);
	return (ft_power_10(nb - 1) * 10);
}

int	calc_digits(char *str)
{
	int	i;

	i = 0 ;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	a;
	int	nb;
	int	i;
	int	s;

	i = 0 ;
	s = 0 ;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] == '-')
				s++;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			break ;
	}
	nb = calc_digits(&str[i]);
	a = 0 ;
	while (str[i] >= '0' && str[i] <= '9')
		a = a + (str[i++] - 48) * ft_power_10((nb--) - 1);
	if (s % 2 != 0)
		a = -a ;
	return (a);
}
