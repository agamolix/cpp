/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 17:31:16 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
#include "WrongCat.h"

int main (void) {

	const Animal* meta = new Animal();
	std::cout << "---------------------------" << std::endl;
	const Animal* j = new Dog();
	std::cout << "---------------------------" << std::endl;
	const Animal* i = new Cat();
	std::cout << "---------------------------" << std::endl;
	const Animal* duck = new Duck();

	std::cout << "---------------------------" << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << duck->getType() << " " << std::endl;

	std::cout << "---------------------------" << std::endl;
	i->makeSound(); 
	j->makeSound();
	duck->makeSound();
	meta->makeSound();

	std::cout << "---------------------------" << std::endl;
	i->eat(); 
	j->eat();
	duck->eat();
	meta->eat();

	std::cout << "---------------------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete duck;

	std::cout << "---------------------------" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	k->makeSound(); 
	meta2->makeSound();

	delete meta2;
	delete k;
	std::cout << "---------------------------" << std::endl;

	return 0;
}
