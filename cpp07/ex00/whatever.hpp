/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:18:14 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/09 21:37:07 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
void swap(T &n1, T &n2)
{
	T aux;

	aux = n1;
	n1 = n2;
	n2 = aux;
}
template < typename T >
T min(T &n1, T &n2)
{
	if (n2 <= n1)
		return n2;
	else
		return n1;
}
template < typename T>
T max(T &n1, T &n2)
{
	if (n2 >= n1)
		return n2;
	else
		return n1;
}

#endif
