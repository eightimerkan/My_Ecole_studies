/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:22:18 by edolgun           #+#    #+#             */
/*   Updated: 2022/06/26 21:14:59 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count == (size_t) - 1 || size == (size_t) - 1)
		return (NULL);
	ret = malloc(count * size);
	if (ret == NULL)
		return (ret);
	ft_bzero(ret, count * size);
	return (ret);
}
