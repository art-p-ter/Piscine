/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:49:13 by aterente          #+#    #+#             */
/*   Updated: 2022/08/15 12:42:47 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	buff_pa;
	int	buff_pb;

	buff_pa = *a;
	buff_pb = *b;
	*a = buff_pb;
	*b = buff_pa;
}
