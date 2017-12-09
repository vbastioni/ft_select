/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbastion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 10:35:37 by vbastion          #+#    #+#             */
/*   Updated: 2017/12/09 10:35:38 by vbastion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strindex(const char *str, const char c)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}