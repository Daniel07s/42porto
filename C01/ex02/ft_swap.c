/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:57:21 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/05 19:57:25 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main()
{
	int	num1;
	int	num2;
	
	num1 = 50;
	num2 = 100;
	
	
	printf("Num1: %d\tNum2: %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("Num1: %d\tNum2: %d\n", num1, num2);

}*/
