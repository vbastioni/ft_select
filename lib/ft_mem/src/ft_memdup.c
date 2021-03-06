/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbastion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 10:34:35 by vbastion          #+#    #+#             */
/*   Updated: 2017/12/09 10:34:52 by vbastion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void			*ft_memdup(void *src, size_t n)
{
	void		*ret;

	if ((ret = malloc(sizeof(n))) == NULL)
		return (NULL);
	return (ft_memcpy(ret, src, n));
}
