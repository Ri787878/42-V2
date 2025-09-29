/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridias <ridias@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:30:53 by ridias            #+#    #+#             */
/*   Updated: 2025/09/12 12:24:28 by ridias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_number(int cen, int dez, int uni)
{
	if (cen == 7 && dez == 8 && uni == 9)
	{
		ft_putchar(cen + '0');
		ft_putchar(dez + '0');
		ft_putchar(uni + '0');
		return ;
	}
	ft_putchar(cen + '0');
	ft_putchar(dez + '0');
	ft_putchar(uni + '0');
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	centenas;
	int	dezenas ;
	int	unidades;

	centenas = 0;
	dezenas = 1;
	unidades = 2;
	while (centenas < dezenas && centenas <= 9)
	{
		while (dezenas < unidades && dezenas <= 9)
		{
			while (unidades <= 9)
			{
				write_number(centenas, dezenas, unidades);
				unidades += 1;
			}
			dezenas += 1;
			unidades = dezenas + 1;
		}
		centenas += 1;
		dezenas = centenas + 1;
		unidades = dezenas + 1;
	}
}
