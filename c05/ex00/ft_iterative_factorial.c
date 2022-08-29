/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:48:37 by aterente          #+#    #+#             */
/*   Updated: 2022/08/25 23:32:16 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (fact > 1)
	{
		nb = nb * (fact - 1);
		fact--;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(10));
	return (0);
}
