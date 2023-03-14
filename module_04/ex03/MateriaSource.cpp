/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:52:12 by lle-bret          #+#    #+#             */
/*   Updated: 2023/03/08 15:29:52 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource(void)
{
	cout << "Default constructor called of MateriaSource" << endl;
	for (size_t i = 0; i < 4; i++)
	{
		_learnedMateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource & copy)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (copy._learnedMateria[i])
			_learnedMateria[i] = copy._learnedMateria[i]->clone();
	}
	cout << "Copy constructor called of MateriaSource" << endl;
}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (assign._learnedMateria[i])
			_learnedMateria[i] = assign._learnedMateria[i]->clone();
	}
	cout << "Assignment operator overload called of MateriaSource" << endl;
	return (*this);
}

// Destructor
MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_learnedMateria[i])
			delete _learnedMateria[i];
	}
	cout << "Destructor called of MateriaSource" << endl;
}

// Other member functions
void MateriaSource::learnMateria(AMateria* m)
{
	int	idx = 0;
	
	while (idx < 4 && _learnedMateria[idx] != NULL)
		++idx;
	if (idx < 4)
	{
		_learnedMateria[idx] = m->clone();
		cout << "Amateria of type " << m->getType()
			 << " learned." << endl;
	}
	else
	{
		cout << "No space left to learn Amateria of type "
			 << m->getType() << endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	idx = 0;
	
	while (idx < 4 && !(_learnedMateria[idx] &&_learnedMateria[idx]->getType() == type))
	{
		++idx;
	}
	if (idx < 4)
	{
		cout << "Amateria of type " << type
			 << " created." << endl;
		return (_learnedMateria[idx]->clone());
	}
	else
	{
		cout << "No Amateria of type " << type
			 << " is known." << endl;
		return (NULL);
	}
}
