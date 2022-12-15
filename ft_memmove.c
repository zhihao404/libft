/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhihao <zhihao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:20:08 by zhihao            #+#    #+#             */
/*   Updated: 2022/12/15 12:20:09 by zhihao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*chardst;
	const char	*charsrc;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	chardst = (char *)dst;
	charsrc = (const char *)src;
	i = len;
	while (i > 0)
	{
		chardst[i - 1] = charsrc[i - 1];
		i--;
	}
	return ((void *)(chardst));
}
