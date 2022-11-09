/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- < jinacio-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:02:40 by jinacio-          #+#    #+#             */
/*   Updated: 2022/11/09 13:54:06 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
class Base
{
	private:

	public:
		virtual ~Base( void );
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);
