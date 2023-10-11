/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autodtor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:31:59 by aguyon            #+#    #+#             */
/*   Updated: 2023/10/10 22:47:33 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AUTODTOR_H
# define AUTODTOR_H

# include <stdlib.h>
# include <stddef.h>

typedef struct s_destruct_list_list	t__destruct_list;

struct s_destruct_list
{
	struct s_destruct_list	*prev;
	struct s_destruct_list	*next;
	void					*(*dtor)();
	void					*data;
};

void	
#endif
