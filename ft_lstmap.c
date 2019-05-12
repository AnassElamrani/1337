/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 05:29:39 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/11 03:28:23 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*begin;

	if (!lst || !f)
		return (NULL);
	newlst = f(lst);
	if (newlst == NULL)
		return (NULL);
	begin = newlst;
	while (lst->next)
	{
		newlst->next = f(lst->next);
		if (newlst == NULL)
			return (NULL);
		newlst = newlst->next;
		lst = lst->next;
	}
	return (begin);
}
