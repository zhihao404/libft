/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhihao <zhihao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:22:07 by zhihao            #+#    #+#             */
/*   Updated: 2022/12/15 12:22:08 by zhihao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp1;
	char	*tmp2;
	size_t	i;

	tmp1 = (char *)haystack;
	if (*needle == '\0')
		return (tmp1);
	if (haystack == NULL && needle != NULL && len == 0)
		return (NULL);
	while (*tmp1 && len)
	{
		tmp2 = (char *)needle;
		i = tmp2 - needle;
		while (*(tmp1 + i) && *tmp2 && *(tmp1 + i) == *tmp2 && i < len)
		{
			tmp2++;
			i++;
		}
		if (i == ft_strlen(needle))
			return (tmp1);
		tmp1++;
		len--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("%s\n", ft_strnstr(NULL, "aiueo", 5));
// 	return (0);
// }