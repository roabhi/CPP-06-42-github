/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:38:37 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 18:14:14 by rabril-h         ###   ########.fr       */
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
	int	randomNumber = rand() % 4;
  //int	randomNumber = rand() % 3;

  if (randomNumber == 0)
    return new A();
  else if (randomNumber == 1)
    return new B();
  else if (randomNumber == 2)
    return new C();
  else
	  return NULL;
}

void identify(Base* ptr)
{
	if (ptr == nullptr)
		std::cout << "NULL pointer" << std::endl;
	else if (dynamic_cast<A*>(ptr))
		std::cout << "Pointer of type Class A" << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << "Pointer of type Class B" << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << "Pointer of type Class C" << std::endl;
}

void identify(Base& p)
{
	identify(&p);
}

int main(void)
{
  std::srand(std::time(0));

  std::cout << "Instance a has randomly being created as " << std::endl;

	Base *a = generate();
	identify(*a);
	identify(a);
	std::cout << std::endl;

  std::cout << "Instance b has randomly being created as " << std::endl;

	Base *b = generate();
	identify(*b);
	identify(b);
	std::cout << std::endl;

  std::cout << "Instance c has randomly being created as " << std::endl;

	Base *c = generate();
	identify(*c);
	identify(c);
	std::cout << std::endl;

  std::cout << "Instance d has randomly being created as " << std::endl;


	Base *d = generate();
	identify(*d);
	identify(d);
	std::cout << std::endl;

  std::cout << "Instance e has randomly being created as " << std::endl;

  Base *e = generate();
	identify(*e);
	identify(e);
	std::cout << std::endl;

  //std::cout << "Instance f has randomly being created as " << std::endl;


  // Base *f = generate();
	// identify(*f);
	// identify(f);
	// std::cout << std::endl;
	
  // std::cout << "Instance z is a NULL pointer and it has been identified as  " << std::endl;

	// Base *z = NULL;
	// identify(z);
	// identify(*z);
	delete	a;
	delete	b;
	delete	c;
	delete	d;
  delete  e;
  //delete  f;
	return ( 0 );
}