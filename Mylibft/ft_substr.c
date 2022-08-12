/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:27:41 by edolgun           #+#    #+#             */
/*   Updated: 2022/03/27 17:08:02 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		size;
	char		*str;

	size = 0;
	if (!s || !len || ft_strlen(s) <= start)
		return (ft_strdup(""));
	while (s[start + size] && size < len)
		size++;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	size = 0;
	while (s[start] && size < len)
		str[size++] = s[start++];
	str[size] = 0;
	return (str);
}
