/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:37:24 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 16:30:37 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal* d = new Dog();
    const Animal* c = new Cat();

    delete d;//should not create a leak
    delete c;

	std::cout << "\n";
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
		animals[i]->makeSound();
        delete animals[i];
    }

	std::cout << "\n";
	Animal** 		anim = new Animal*[10];
	std::string*	ideas = new std::string[100];
	const Brain		brain(ideas);

	ideas[0] = "ceci est un test";
	ideas[50] = "ceci est un autre test";
	
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << i << std::endl;
		anim[i] = new Dog(brain);
		anim[i]->makeSound();
	}
	for (size_t i = 5; i < 10; i++)
	{
		std::cout << i << std::endl;
		anim[i] = new Cat();
		anim[i]->makeSound();
	}
	for (size_t i = 0; i < 10; i++)
	{
		delete anim[i];
	}
	delete[] anim;
	delete[] ideas;
	
	return 0;
}
