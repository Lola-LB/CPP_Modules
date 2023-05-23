/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:37:24 by lle-bret          #+#    #+#             */
/*   Updated: 2023/05/22 16:14:39 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* meta = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	std::cout << "\n";
	std::cout << "dog type: " << dog->getType() << std::endl;
	std::cout << "cat type: " << cat->getType() << std::endl;
	std::cout << "meta sound: ";
	meta->makeSound();
	std::cout << "dog sound: ";
	dog->makeSound();
	std::cout << "cat sound: ";
	cat->makeSound();
	
	delete meta;
	std::cout << "\n";
	meta = cat;
	std::cout << "meta type: " << meta->getType() << std::endl;
	std::cout << "meta sound: ";
	meta->makeSound();
	
	std::cout << "\n";
	meta = dog;
	std::cout << "meta type: " << meta->getType() << std::endl;
	std::cout << "meta sound: ";
	meta->makeSound();
	
	std::cout << "\n";
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	
	std::cout << "\n";
	std::cout << wrong_cat->getType() << std::endl;
	wrong_cat->makeSound();
	wrong_meta->makeSound();
	
	std::cout << "\n";
	delete dog;
	delete cat;
	delete wrong_meta;
	delete wrong_cat;
	return 0;
}