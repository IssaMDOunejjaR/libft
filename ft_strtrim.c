/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:51:49 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/25 15:20:26 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		begin(char const *s1, char const *set, int start)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		while (s1[start] == set[i])
		{
			i = 0;
			start++;
		}
		i++;
	}
	return (start);
}

int		the_end(char const *s1, char const *set, int end)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		while (s1[end] == set[i])
		{
			i = 0;
			end--;
		}
		i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		l_s1;
	char	*str;

	i = 0;
	l_s1 = 0;
	if (!s1)
		return (0);
	while (s1[l_s1] != '\0')
		l_s1++;
	start = begin(s1, set, 0);
	end = the_end(s1, set, l_s1 - 1);
	if (end < start)
		return ("");
	str = malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (0);
	while (start <= end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
