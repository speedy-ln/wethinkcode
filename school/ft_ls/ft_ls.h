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
}					t_list;

typedef	struct			s_functions
{

	char				c;
	t_list				*(*f)(char *str, int show_hidden);
}				t_functions;

t_list	*ft_ls(char *str, int show_hidden);
void	ft_lsr(t_list *root);
void	add_element(t_list **list, char *value);
t_list	*ft_lsl(char *str, int show_hidden);
void	print_list(t_list *root);

#endif
