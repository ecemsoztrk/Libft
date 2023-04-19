/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecozturk <ecozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:11:22 by ecozturk          #+#    #+#             */
/*   Updated: 2022/12/28 17:12:52 by ecozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	new_c;

	new_c = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == new_c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
