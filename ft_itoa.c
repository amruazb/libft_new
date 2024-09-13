/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:47 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/25 14:14:01 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	unsigned int	num;
	char			*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = n;
	len = count(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num != 0)
	{
		str[--len] = ('0' + (num % 10));
		num = num / 10;
	}
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(123));
// 	printf("%s\n", ft_itoa(-456));
// 	printf("%s\n", ft_itoa(7890));
// 	printf("%s\n", ft_itoa(-12345));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(738214748));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(2147483647));

// }
