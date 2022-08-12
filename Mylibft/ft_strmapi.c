/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:27:15 by edolgun           #+#    #+#             */
/*   Updated: 2022/03/27 17:07:36 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned char	i;	

	if (!s || !f)
		return (0);
	new = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new)
		return (0);
	i = 0;
	while (s[i++])
		new[i - 1] = f(i - 1, s[i - 1]);
	new[i - 1] = 0;
	return (new);
}
