/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbastion <vbastion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:12:55 by vbastion          #+#    #+#             */
/*   Updated: 2017/08/21 11:25:08 by vbastion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void		ft_strdel(char **as)
{
	if (as == NULL || *as == NULL)
		return ;
	free(*as);
	*as = NULL;
}
