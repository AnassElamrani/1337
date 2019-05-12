/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:25:34 by anelamra          #+#    #+#             */
/*   Updated: 2019/04/26 04:26:21 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		z;
	int		j;
	int		k;
	char	*ptr;

	if (s1 && s2)
	{
		i = 0;
		j = 0;
		k = 0;
		z = ft_strlen(s1) + ft_strlen(s2);
		if (!(ptr = malloc(z * sizeof(char) + 1)))
			return (NULL);
		while (s1[i] != '\0')
			ptr[k++] = s1[i++];
		while (s2[j] != '\0')
			ptr[k++] = s2[j++];
		ptr[k] = '\0';
		return (ptr);
	}
	return (NULL);
}
