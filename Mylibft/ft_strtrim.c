/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:27:36 by edolgun           #+#    #+#             */
/*   Updated: 2022/03/27 17:07:57 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char	*set)
{
	size_t	start;
	size_t	len;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	start = 0;
	len = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, start, ++len - start));
}
