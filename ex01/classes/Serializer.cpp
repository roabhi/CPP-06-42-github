/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:20:21 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 17:31:35 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
  return ;
}

Serializer::Serializer(const Serializer & inst)
{
  (void)inst;
}

Serializer::~Serializer()
{
  return ;
}

Serializer &Serializer::operator=(const Serializer & inst)
{
  (void)inst;
  return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t src)
{
  return (reinterpret_cast<Data*>(src));
}