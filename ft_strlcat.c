/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:06:33 by ecozturk          #+#    #+#             */
/*   Updated: 2022/12/30 12:50:23 by ecozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst && !size)
		return (0);
	i = ft_strlen(dst);
	if (i >= size)
		return (ft_strlen(src) + size);
	ft_strlcpy((dst + i), src, (size - i));
	return (i + ft_strlen(src));
}
