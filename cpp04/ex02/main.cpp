/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrilles <atrilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:35:18 by atrilles          #+#    #+#             */
/*   Updated: 2022/12/08 17:32:24 by atrilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Dog.h"
#include "Duck.h"
#include "WrongCat.h"

int main (void) {

	std::cout << "---------------------------" << std::endl;
	AAnimal* tab[4];
	std::cout << "---------------------------" << std::endl;
	tab[0] = new Cat();
	std::cout << "---------------------------" << std::endl;
	tab[1] = new Cat();
	std::cout << "---------------------------" << std::endl;
	tab[2] = new Dog();
	std::cout << "---------------------------" << std::endl;
	tab[3] = new Dog();
	std::cout << "---------------------------" << std::endl;
	
	tab[0]->findBrain()->ideas[0] = "I'm a cat";
	tab[0]->findBrain()->ideas[1] = "I'm not a dog";
	tab[1]->findBrain()->ideas[0] = "I say miaou";
	tab[1]->findBrain()->ideas[1] = "I love to eat birds";
	tab[2]->findBrain()->ideas[0] = "I'm a dog";
	tab[2]->findBrain()->ideas[1] = "I'm not a cat";
	tab[3]->findBrain()->ideas[0] = "I say wouaf";
	tab[3]->findBrain()->ideas[1] = "I love to eat bones";
	std::cout << "tab[0] = " << tab[0]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[0] = " << tab[0]->findBrain()->ideas[1] << std::endl;
	std::cout << "tab[1] = " << tab[1]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[1] = " << tab[1]->findBrain()->ideas[1] << std::endl;
	std::cout << "tab[2] = " << tab[2]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[2] = " << tab[2]->findBrain()->ideas[1] << std::endl;
	std::cout << "tab[3] = " << tab[3]->findBrain()->ideas[0] << std::endl;
	std::cout << "tab[3] = " << tab[3]->findBrain()->ideas[1] << std::endl;

	std::cout << "---------------------------" << std::endl;
	
	for (int i = 0; i < 4; i++)	
		delete tab[i];

	std::cout<< "-------------------------" << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "---------------------------" << std::endl;
	i->makeSound();
	j->makeSound();
	
	std::cout << "---------------------------" << std::endl;
	i->eat(); 
	j->eat();
	std::cout << "---------------------------" << std::endl;
	delete j;
	delete i;

	return 0;
}
