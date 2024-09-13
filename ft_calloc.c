/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:14:01 by aabashee          #+#    #+#             */
/*   Updated: 2024/06/25 10:44:12 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tlen;
	void	*ptr;

	tlen = count * size;
	ptr = malloc(tlen);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tlen);
	return (ptr);
}
