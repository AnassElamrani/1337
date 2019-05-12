/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 07:14:02 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/08 00:08:30 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int		i;
	char	*s;
	int		x;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	x = ft_xount(n);
	s = ft_strnew(x);
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		s[i] = '-';
		i++;
	}
	while (--x >= i && n > 0)
	{
		s[x] = (n % 10 + '0');
		n = n / 10;
	}
	return (s);
}
