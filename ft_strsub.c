/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:56:11 by anelamra          #+#    #+#             */
/*   Updated: 2019/04/26 04:14:12 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*fresh;

	j = 0;
	if (!(fresh = malloc(len + 1 * sizeof(char))))
		return (NULL);
	while (s && j < len)
	{
		fresh[j] = s[start];
		start++;
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}
