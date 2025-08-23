/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize1111.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:07:19 by stagma            #+#    #+#             */
/*   Updated: 2025/08/23 19:01:07 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowercase(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32 ;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	status;

	lowercase(str);
	i = 0 ;
	status = 1 ;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			status = 0 ;
		else if (str[i] >= 'a' && str[i] <= 'z' && status)
		{
			str[i] -= 32 ;
			status = 0 ;
		}
		else if (!(str[i] >= 'a' && str[i] <= 'z'))
			status = 1 ;
		i++;
	}
	return (str);
}

int main()
{
	char c[] = "hello xy+565khkKK&j";
	printf("%s", ft_strcapitalize(c));
}
