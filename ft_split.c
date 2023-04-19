/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:45:59 by ecozturk          #+#    #+#             */
/*   Updated: 2022/12/30 14:21:13 by ecozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (counter);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	cnt;
	char	**a;

	i = 0;
	cnt = counter(s, c);
	a = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!a)
		return (NULL);
	while (i < cnt)
	{
		while (*s == c)
			s++;
		len = 0;
		while (*(s + len) != c && *(s + len))
			len++;
		a[i++] = ft_substr(s, 0, len);
		s += len;
	}
	a[i] = NULL;
	return (a);
}
