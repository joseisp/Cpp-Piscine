/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- <jinacio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:56:01 by jinacio-          #+#    #+#             */
/*   Updated: 2023/06/17 14:30:16 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <stdlib.h>
#include <sstream>

class RPN
{
	private:
		std::stack<int> numbers;
	public:
		RPN();
		~RPN();
		RPN (RPN const &cpy);
		RPN &operator=(RPN const &cpy);
		void insert(char *str);
		void calculing (char str);

};

#endif
