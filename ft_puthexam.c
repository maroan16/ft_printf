/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexam.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:57:33 by mqaos             #+#    #+#             */
/*   Updated: 2022/11/15 16:30:48 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexalen(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i = 1;
	while (nbr != 0)
	{
		nbr /= 16;
		i++;
	}
	return (i);
}

static void	hexaputm(unsigned int nbr)
{
	if (nbr >= 16)
		hexaputm(nbr / 16);
	ft_printchar("0123456789ABCDEF"[nbr % 16]);
}

int	ft_puthexam(unsigned int nbr)
{
	hexaputm(nbr);
	return (hexalen(nbr));
}
