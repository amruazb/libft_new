/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:10:33 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/26 14:39:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	split = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (split == NULL)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			split[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	split[i] = 0;
	return (split);
}

// int main()
// {
// 	char **str;
// 	str = ft_split("Hello world , kd fdspf fv",' ');
// 	while(*str)
// 	{
// 		printf("%s\n",*str++);
// 	}
// 	free(*str); 
// }
// #include "libft.h"
// #include <stdio.h>

// size_t	count_words(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	count;

// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c)
// 			i++;
// 		if (s[i] && s[i] != c)
// 			count++;
// 		while (s[i] && s[i] != c)
// 			i++;
// 	}
// 	return (count);
// }

// void	*copystr(char const *s, char c, char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] && s[i] != c)
// 		i++;
// 	str = (char *)ft_calloc((i + 1), sizeof(char));
// 	if (!str)
// 	{
// 		while (i != 0)
// 		{
// 			free(&str[i]);
// 			i--;
// 		}
// 		return (NULL);
// 	}
// 	ft_memcpy(str, s, i);
// 	return (str);
// }

// void	*allocate(char **str_arr, char const *s, char c)
// {
// 	size_t	i;
// 	size_t	words;

// 	words = count_words(s, c);
// 	free(str_arr);
// 	str_arr = (((char **)malloc(sizeof(char *) * (words + 1))));
// 	if (!str_arr)
// 		return (NULL);
// 	i = 0;
// 	while (i < words)
// 	{
// 		while (*s == c)
// 			s++;
// 		str_arr[i] = copystr(s, c, str_arr[i]);
// 		while (*s && *s != c)
// 			s++;
// 		i++;
// 	}
// 	str_arr[i] = NULL;
// 	return (str_arr);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**str_arr;

// 	str_arr = NULL;
// 	if (s == NULL)
// 	{
// 		return (NULL);
// 	}
// 	str_arr = allocate(str_arr, s, c);
// 	return (str_arr);
// }