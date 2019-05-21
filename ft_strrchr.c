/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:55:57 by txaba             #+#    #+#             */
/*   Updated: 2019/05/21 14:27:42 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (s == '\0')
		return (NULL);
	while (len > 0 && s)
	{
		if (s[len] == c)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (NULL);
}
