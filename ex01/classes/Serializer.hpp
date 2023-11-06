/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:18:01 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 17:19:57 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iomanip>
# include <iostream>

typedef struct	s_Data
{
	char	c;
	int		i;
	int		*ptr;
}	Data;

class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
  
  private:
		Serializer();
		Serializer(const Serializer &serializer);
		~Serializer();
		Serializer	&operator=(const Serializer& serializer);
	
};

#endif