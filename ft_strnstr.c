/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:35:23 by ecozturk          #+#    #+#             */
/*   Updated: 2022/12/30 12:36:26 by ecozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *) haystack;
	if (!*needle)
		return (result);
	i = 0;
	while (i < len && result[i])
	{
		j = 0;
		while (result[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (result + i);
			j++;
		}
		i++;
	}
	return (0);
}
