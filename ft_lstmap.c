/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:05:12 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 14:54:24 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_res;
	t_list	*new;
	void	*ptr;

	if (!lst || !f)
		return (NULL);
	lst_res = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		new = ft_lstnew(ptr);
		if (!new)
		{
			del(ptr);
			ft_lstclear(&lst_res, del);
		}
		ft_lstadd_back(&lst_res, new);
		lst = lst->next;
	}
	return (lst_res);
}
