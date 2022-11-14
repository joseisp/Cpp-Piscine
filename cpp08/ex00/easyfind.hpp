/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:02:28 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/13 22:28:39 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <vector>
# include <list>
# include <deque>

template<typename T>
typename T::iterator	easyfind(T& container, int number)
{
	typename T::iterator location;

	location = std::find (container.begin(), container.end(), number);
	if (location == container.end())
		throw std::exception();
	return location;
}

#endif
