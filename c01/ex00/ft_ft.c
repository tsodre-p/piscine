/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:57:27 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/23 11:57:30 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	*p_nbr;
	int	nbr;

	nbr = 21;
	p_nbr = &nbr;

	ft_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}
