/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:17:04 by iel-mach          #+#    #+#             */
/*   Updated: 2021/12/16 23:45:13 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdio.h>

void	ft_msg(int sig)
{
	static int	rut;
	static int	i;

	if (sig == SIGUSR2)
		rut += (1 << (7 - i));
	i++;
	if (i == 8)
	{
		ft_putchar(rut);
		i = 0;
		rut = 0;
	}
}

int	main(void)
{
	write (1, "PID = ", 6);
	ft_putnbr(getpid());
	signal(SIGUSR2, ft_msg);
	signal(SIGUSR1, ft_msg);
	while (1)
		pause ();
}
