/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toggle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbastion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:47:59 by vbastion          #+#    #+#             */
/*   Updated: 2017/12/09 10:10:59 by vbastion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void					ft_toggle_all(char buf[4], t_env *env)
{
	t_clist				*curr;

	(void)buf;
	curr = env->args;
	while (1)
	{
		((t_arg *)curr->content)->selected = 1;
		curr = curr->next;
		if (curr == env->args)
			break ;
	}
}

void					ft_toggle_lnk(char buf[4], t_env *env)
{
	t_clist				*curr;
	t_arg				*arg;

	(void)buf;
	curr = env->args;
	while (1)
	{
		arg = (t_arg *)curr->content;
		if ((arg->type & LINK) == LINK)
			arg->selected = 1;
		curr = curr->next;
		if (curr == env->args)
			break ;
	}
}

void					ft_toggle_dir(char buf[4], t_env *env)
{
	t_clist				*curr;
	t_arg				*arg;

	(void)buf;
	curr = env->args;
	while (1)
	{
		arg = (t_arg *)curr->content;
		if ((arg->type & DIRE) == DIRE)
			arg->selected = 1;
		curr = curr->next;
		if (curr == env->args)
			break ;
	}
}

void					ft_toggle_non(char buf[4], t_env *env)
{
	t_clist				*curr;

	(void)buf;
	curr = env->args;
	while (1)
	{
		((t_arg *)curr->content)->selected = 0;
		curr = curr->next;
		if (curr == env->args)
			break ;
	}
}

void					ft_toggle_fil(char buf[4], t_env *env)
{
	t_clist				*curr;
	t_arg				*arg;

	(void)buf;
	curr = env->args;
	while (1)
	{
		arg = (t_arg *)curr->content;
		if (arg->type == REGU)
			arg->selected = 1;
		curr = curr->next;
		if (curr == env->args)
			break ;
	}
}
