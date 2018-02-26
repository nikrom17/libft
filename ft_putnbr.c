/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:41:24 by nroman            #+#    #+#             */
/*   Updated: 2018/02/25 20:00:29 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
		return ;
	}
	else
		ft_putchar(nb + '0');
	return ;
}
