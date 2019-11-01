/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:23:22 by iounejja          #+#    #+#             */
/*   Updated: 2019/11/01 20:09:24 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	l_dest;
	size_t	l_src;
	size_t	l;

	i = 0;
	l_dest = ft_strlen(dst);
	l_src = ft_strlen(src);
	l = l_dest;
	if (!dst && size == 0)
		return (l_src);
	else if (size <= l_dest)
		return (l_src + size);
	else
	{
		while (src[i] && l_dest < size - 1)
			dst[l_dest++] = src[i++];
		dst[l_dest] = '\0';
		return (l + l_src);
	}
}
