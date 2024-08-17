/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:49:24 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/06 11:49:31 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quociente;
	int	resto;

	quociente = *a;
	resto = *b;
	*a = quociente / resto;
	*b = quociente % resto;
}
/*
int	main(void)
{
	int a;
	int b;
	
	a = 45;
	b = 2;
	
	printf("quociente : %d, resto : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("quociente : %d, resto : %d\n", a, b);
	

}*/
