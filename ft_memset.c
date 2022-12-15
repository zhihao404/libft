/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhihao <zhihao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:20:15 by zhihao            #+#    #+#             */
/*   Updated: 2022/12/15 12:20:16 by zhihao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*mem;
	size_t	i;

	mem = (char *)b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		mem[i] = c;
		i++;
	}
	return ((void *)(mem));
}
