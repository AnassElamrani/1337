/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:21:23 by anelamra          #+#    #+#             */
/*   Updated: 2019/04/26 04:09:35 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		j;
	char	*fresh;

	if (s)
	{
		j = 0;
		if (!(fresh = malloc(ft_strlen(s) * sizeof(char) + 1)))
			return (NULL);
		while (s[j])
		{
			fresh[j] = f(j, s[j]);
			j++;
		}
		fresh[j] = '\0';
		return (fresh);
	}
	return ((char *)s);
}
