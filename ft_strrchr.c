/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:35:34 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/12 10:16:14 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = 0;
	while (*s)
	{
		s++;
		n++;
	}
	while (n >= 0)
	{
		if ((char)c == *s)
			return ((char *)(s));
		s--;
		n--;
	}
	return (0);
}

/* int main(void) 
{
    char str[100];
    char target;
    printf("Enter a string: ");
    scanf("%99s", str);

    if (ft_strlen(str) == 0) {
        printf("String is empty. Exiting...\n");
        return 1;
    }

    printf("Enter a character to search for: ");
    scanf(" %c", &target);

    char *result = ft_strrchr(str, target);

    if (result != NULL) {
        printf("Last occurrence of character '%c' found 
		at position: %ld\n", target, (long)(result - str) + 1);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
} */