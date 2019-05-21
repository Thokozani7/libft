/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:51:23 by txaba             #+#    #+#             */
/*   Updated: 2019/05/21 16:58:25 by txaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] && i < size)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (len);
}
