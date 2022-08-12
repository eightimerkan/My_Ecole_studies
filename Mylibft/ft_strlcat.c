/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:26:40 by edolgun           #+#    #+#             */
/*   Updated: 2022/03/27 17:07:19 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (dst[p])
		p++;
	len = p + ft_strlen(src);
	if (dstsize <= p)
		return (dstsize + ft_strlen(src));
	while (src[i] && p < (dstsize - 1))
		dst[p++] = src[i++];
	dst[p] = '\0';
	return (len);
}
