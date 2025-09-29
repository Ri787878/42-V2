/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bennunes <bennunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:42:40 by bennunes          #+#    #+#             */
/*   Updated: 2025/09/14 15:52:36 by bennunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_last_line(int x, char c_e, char recheio, char c_d)
{
	int	n;

	n = 1;
	ft_putchar(c_e);
	while (n < x - 1)
	{
		ft_putchar(recheio);
		n++;
	}
	if (x != 1)
		ft_putchar(c_d);
}

void	middle_lines(int x, char recheio)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0 || n == x - 1)
			ft_putchar(recheio);
		else
			ft_putchar(' ');
		n++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			first_last_line(x, 'A', 'B', 'A');
		else if (i == y - 1)
			first_last_line(x, 'C', 'B', 'C');
		else
			middle_lines(x, 'B');
		ft_putchar('\n');
		i++;
	}
}
