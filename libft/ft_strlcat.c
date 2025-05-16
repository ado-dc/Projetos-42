/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-dc <ado-dc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:51:24 by ado-dc            #+#    #+#             */
/*   Updated: 2025/05/16 13:12:15 by ado-dc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	dst_len = i;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	j = 0;
	while (src[j] && (dst_len + j + 1) < dstsize)
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	if (dst_len + j < dstsize)
		dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
