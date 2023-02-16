/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   think.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:00:14 by jergashe          #+#    #+#             */
/*   Updated: 2023/02/15 10:20:58 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"

int	think(t_philo *philo)
{
	set_philo_state(philo, THINKING);
	print_msg(philo->data, philo->id, THINK);
	return (0);
}
