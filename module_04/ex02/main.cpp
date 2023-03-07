/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:37:24 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/05 20:16:19 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	//const Animal a = Animal(); // Should not work because Animal is abstract
	const Animal* d = new Dog();
    const Animal* c = new Cat();

    delete d;//should not create a leak
    delete c;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

	// Animal* animals		= new Animal[10];
	// string*	ideas		= new string[100];
	// const Brain brain(ideas);

	// ideas[0] = "ceci est un test";
	// ideas[50] = "ceci est un autre test";
	
	// for (size_t i = 0; i < 5; i++)
	// {
	// 	cout << i << endl;
	// 	animals[i] = Dog(brain);
	// }
	// for (size_t i = 5; i < 10; i++)
	// {
	// 	animals[i] = Cat();
	// }
	// for (size_t i = 0; i < 10; i++)
	// {
	// 	animals[i].~Animal();
	// }
	// delete[] animals;
	// delete[] ideas;
	
	return 0;
}
