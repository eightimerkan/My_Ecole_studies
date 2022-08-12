/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:24:57 by edolgun           #+#    #+#             */
/*   Updated: 2022/03/27 17:06:09 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*i;

	p = (unsigned char *)dst;
	i = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (i < p)
		while (len-- > 0)
			p[len] = i[len];
	else
	{
		while (len-- > 0)
		{
			*p = *i;
			p++;
			i++;
		}
	}
	return (dst);
}
