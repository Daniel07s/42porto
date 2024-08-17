/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:06:10 by danmendo          #+#    #+#             */
/*   Updated: 2024/08/07 11:06:12 by danmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	troca;
	int	contador;

	contador = 0;
	while (tab[contador] < size)
	{
		troca = tab[contador];
		tab[contador] = tab[size -1];
		tab[size -1] = troca;
		contador++;
		size--;
	}
}

int	main()
{
	
	int num1[]={1, 2, 3, 4, 5, 6, 7, 8};
	for (int i = 0; i < 8; i++)
		printf("%i,", num1[i]);
	printf("\n");
	ft_rev_int_tab(&num1[0], 8);
	for (int i = 0; i < 8; i++)
		printf("%i,", num1[i]);
	return (0);
}
