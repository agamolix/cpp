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

	AAnimal* tab[4];
	tab[0] = new Cat();
	tab[1] = new Cat();
	tab[2] = new Dog();
	tab[3] = new Dog();

	tab[0]->findBrain()->ideas[0] = "I'm a cat";
	tab[0]->findBrain()->ideas[1] = "I'm not a dog";
	tab[1]->findBrain()->ideas[0] = "I'm a cat-duck";
	tab[1]->findBrain()->ideas[1] = "I'm a beautiful cat-duck";
	tab[2]->findBrain()->ideas[0] = "I'm a dog";
	tab[2]->findBrain()->ideas[1] = "I'm not a cat";
	tab[3]->findBrain()->ideas[0] = "I'm a dog-snail";
	tab[3]->findBrain()->ideas[1] = "I'm a beautiful dog-snail";
	std::cout << "tab[0] = " << tab[0]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[0] = " << tab[0]->findBrain()->ideas[1] << std::endl;
	std::cout << "tab[1] = " << tab[1]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[1] = " << tab[1]->findBrain()->ideas[1] << std::endl;
	std::cout << "tab[2] = " << tab[2]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[2] = " << tab[2]->findBrain()->ideas[1] << std::endl;
	std::cout << "tab[3] = " << tab[3]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[3] = " << tab[3]->findBrain()->ideas[1] << std::endl;


	for (int i = 0; i < 4; i++)	
		delete tab[i];

	std::cout<< "-------------------------" << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	return 0;
}
