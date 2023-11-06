/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:38:37 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 17:56:35 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./classes/Base.hpp"
#include "./classes/B.hpp"
#include "./classes/A.hpp"
#include "./classes/C.hpp"
#include <iostream>
#include <ctime>

#include <iostream>

Base * generate(void)
{
	int	randomNumber = rand() % 3;

	switch (randomNumber)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify(Base* ptr)
{
	if (ptr == nullptr)
	{
		std::cout << "NULL pointer" << std::endl;
	}
	else if (dynamic_cast<A*>(ptr))
	{
		std::cout << "Clase A pointer" << std::endl;
	}
	else if (dynamic_cast<B*>(ptr))
	{
		std::cout << "Clase B pointer" << std::endl;
	}
	else if (dynamic_cast<C*>(ptr))
	{
		std::cout << "Clase C pointer" << std::endl;
	}
}

void identify(Base& p)
{
	identify(&p);
}

int main(void)
{
  std::srand(std::time(0));

	Base *a = generate();
	identify(*a);
	identify(a);
	std::cout << std::endl;
	Base *b = generate();
	identify(*b);
	identify(b);
	std::cout << std::endl;
	Base *c = generate();
	identify(*c);
	identify(c);
	std::cout << std::endl;
	Base *d = generate();
	identify(*d);
	identify(d);
	std::cout << std::endl;
  Base *e = generate();
	identify(*e);
	identify(e);
	std::cout << std::endl;
  Base *f = generate();
	identify(*f);
	identify(f);
	std::cout << std::endl;
		

	Base *z = NULL;
	identify(z);
	identify(*z);
	delete	a;
	delete	b;
	delete	c;
	delete	d;
  delete  e;
  delete  f;
	return ( 0 );
}