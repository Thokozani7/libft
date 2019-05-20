/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:12:27 by txaba             #+#    #+#             */
/*   Updated: 2019/05/20 12:18:02 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*d;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		d[j] = str[i];
		j++;
		i++;
	}
	d[j] = '\0';
	return (d);
}
