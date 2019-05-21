/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:58:02 by txaba             #+#    #+#             */
/*   Updated: 2019/05/21 15:04:38 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	char	*hay;
	char	*nee;

	i = 0;
	hay = (char *)haystack;
	nee = (char *)needle;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == nee[j])
		{
			j++;
			if (nee[j] == '\0')
			{
				return (hay + i);
			}
		}
		i++;
	}
	return (NULL);
}
