/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:33:47 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/02 12:08:51 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		if_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int j;

	if (!s)
		return (NULL);
	while (if_space(*s))
		s++;
	j = ft_strlen(s) - 1;
	while (j >= 0 && if_space(s[j]))
		j--;
	if (j < 0)
		return (ft_strdup(""));
	return ((ft_strsub(s, 0, j + 1)));
}
