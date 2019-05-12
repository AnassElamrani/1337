/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 04:33:44 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/01 17:12:44 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *ptr;

	if (!(ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(ptr, s1);
	return (ptr);
}
