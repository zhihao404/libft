/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhihao <zhihao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:20:29 by zhihao            #+#    #+#             */
/*   Updated: 2022/12/15 12:20:30 by zhihao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	if (s != NULL)
		write(fd, "\n", 1);
}

// #include <stdio.h>
// int main(void)
// {
// 	int fd = 1;
// 	char *s = "abc";
// 	ft_putendl_fd(s, fd);
// 	return (0);
// }