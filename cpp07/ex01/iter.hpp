/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:18:14 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/13 18:55:34 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

#include <iostream>


template <typename T>
void	iter(T* array, size_t len, void (*ft)(const T&))
{
	int i = 0;
	while(i < len)
	{
		ft(array[i]);
		i++;
	}
}
#endif
