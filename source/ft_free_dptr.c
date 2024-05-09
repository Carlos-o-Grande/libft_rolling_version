/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoao-de <cjoao-de@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:27:46 by cjoao-de          #+#    #+#             */
/*   Updated: 2024/05/09 15:50:03 by cjoao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// frees a double pointer array
void	ft_free_dprt(char **dptr)
{
	int		i;

	i = 0;
	while (dptr[i])
	{
		free(dptr[i]);
		i++;
	}
	free(dptr);
}
