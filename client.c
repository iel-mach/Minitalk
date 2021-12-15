/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:08:59 by iel-mach          #+#    #+#             */
/*   Updated: 2021/12/15 22:33:15 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void ft_send(pid_t pid, char c)
{
	int b;
	int i;

	i = 7;
	while (i >= 0)
	{
		b =  ((c >> i) & 1);
		if (b == 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(50);
		i--;
	}
}

int main(int ac, char **av)
{
	int		i;
	pid_t	pid;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (pid <= 0)
			return (0);
		while (av[2][i])
			ft_send(pid, av[2][i++]);
	}
	else
		write(1, "ERROR", 5);
	return (0);
}