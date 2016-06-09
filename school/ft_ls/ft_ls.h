/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 11:32:32 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/09 15:24:36 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS
# define FT_LS

typedef	struct			s_list
{
	char				*file_name;
	struct	s_list		*next;
}						t_list;

void	ft_ls(int i);
void	add_element(t_list **list, char *value);
void	ft_lsl(int a);


#endif
