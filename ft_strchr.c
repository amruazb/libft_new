/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 06:29:38 by aabashee          #+#    #+#             */
/*   Updated: 2023/12/11 23:30:38 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;

	target = (unsigned char)c;
	while (*s)
	{
		if (*s == target)
			return ((char *)s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (NULL);
}
// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s != '\0' && *s != (char)c)
// 		s++;
// 	if (*s == (char)c)
// 		return ((char *)s);
// 	return (NULL);
// }
/* int main(void)
{
    char str[100];
    char target;
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search for: ");
    scanf(" %c", &target);

    char *result = ft_strchr(str, target);

    if (result != NULL)
	    printf("Character '%c' found at position: %s\n", target, result);
    else
        printf("Character '%c' not found in the string.\n", target);
    return 0;
}  */