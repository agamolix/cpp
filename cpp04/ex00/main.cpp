/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/02/03 16:27:03 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
#include "WrongCat.h"

int main (void) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* duck = new Duck();

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << duck->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	duck->makeSound();
	meta->makeSound();

	i->eat(); //will output the cat sound!
	j->eat();
	duck->eat();
	meta->eat();

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

	return 0;
}
