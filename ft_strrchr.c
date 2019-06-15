/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:55:57 by txaba             #+#    #+#             */
/*   Updated: 2019/06/13 10:28:08 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*st;

	len = ft_strlen(s);
	st = (char *)s;
	while (st[len] != c && len != 0)
		len--;
	if (st[len] == c)
		return (st + len);
	return (NULL);
}
