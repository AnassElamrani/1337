/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anelamra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:35:28 by anelamra          #+#    #+#             */
/*   Updated: 2019/05/11 03:26:49 by anelamra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*delete;
	t_list	*next_maillon;

	delete = *alst;
	while (delete)
	{
		next_maillon = delete->next;
		del(delete->content, delete->content_size);
		free(delete);
		delete = next_maillon;
	}
	*alst = NULL;
}
