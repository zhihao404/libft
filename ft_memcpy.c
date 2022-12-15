/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhihao <zhihao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:20:00 by zhihao            #+#    #+#             */
/*   Updated: 2022/12/15 12:20:01 by zhihao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*chardst;
	const char	*charsrc;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	chardst = (char *)dst;
	charsrc = (const char *)src;
	i = 0;
	while (i < n)
	{
		chardst[i] = charsrc[i];
		i++;
	}
	return ((void *)(chardst));
}
