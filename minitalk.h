/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:18:33 by iel-mach          #+#    #+#             */
/*   Updated: 2021/12/16 23:45:38 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include <stdlib.h>

void	ft_putnbr(int n);
int		ft_atoi(const char *s);
void	ft_putchar(char c);
void	ft_send(pid_t pid, char c);
void	ft_msg(int sig);

#endif