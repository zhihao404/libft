/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhihao <zhihao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:24:24 by zhihao            #+#    #+#             */
/*   Updated: 2022/12/10 19:24:25 by zhihao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	first;
	char	second;

	if ((unsigned char)c <= 0x7F)
	{
		write(fd, &c, 1);
	}
	else
	{
		first = X8 + X7 + ((unsigned char)c / X7);
		write(fd, &first, 1);
		second = X8 + ((unsigned char)c % X7);
		write(fd, &second, 1);
	}
}
