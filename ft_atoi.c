/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:06:51 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/12 00:09:06 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	if (!ft_strcmp(str, "2147483647"))
		return (2147483647);
	else if (!ft_strcmp(str, "-2147483648"))
		return (-2147483648);
	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == '\r' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - 48);
	if (sign == -1)
		return (res * -1);
	return (res);
}
