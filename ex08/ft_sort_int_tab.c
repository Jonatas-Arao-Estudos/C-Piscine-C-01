/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:07:21 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/20 19:35:46 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	jump;
	int	temp;

	index = 1;
	while (index < size)
	{
		temp = tab[index];
		jump = index - 1;
		while ((jump >= 0) && (tab[jump] > temp))
		{
			tab[jump + 1] = tab[jump];
			jump = jump - 1;
		}
		tab[jump + 1] = temp;
		index++;
	}
}
