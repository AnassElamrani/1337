/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 03:10:54 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/08 00:22:38 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		j;
	int		cccount;
	char	**chaine_de_strings;

	if ((s))
	{
		j = 0;
		cccount = ft_wcount(s, c);
		if (!(chaine_de_strings = malloc(sizeof(char *) * cccount + 1)))
			return (NULL);
		while (j < cccount)
		{
			while (*s && *s == c)
				s++;
			chaine_de_strings[j] = ft_strsub(s, 0, ft_to_next(s, c));
			s = s + ft_to_next(s, c);
			j++;
		}
		chaine_de_strings[j] = NULL;
		return (chaine_de_strings);
	}
	return (NULL);
}
