/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:24:21 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/18 18:15:56 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		class iterator
		{
			private:

			public:
				int				_i;
				T				_end;
				MutantStack&	_stack;
				
				//Constructor
				iterator(){}
				iterator(int i, MutantStack & stack) : _i(i), _end(T()), _stack(stack){}

				// Operator
				T & operator*(void)
				{
					if (_i >= 0)
						return _stack.c[_i];
					return (_end);
				}

				iterator &	operator=( const iterator &assign )
				{
					_i = assign._i;
					_stack = assign._stack;
				}

				iterator & operator++(void)
				{
					if (_i >= 0)
						--_i;
					return *this;
				}

				iterator operator++(int)
				{
					if (_i >= 0)
						return (iterator(_i--, _stack));
					return *this;
				}

				iterator & operator--(void)
				{
					++_i;
					return *this;
				}
				
				iterator operator--(int)
				{
					return (iterator(_i++, _stack));
				}
				
				// Destructor
				~iterator(){}
		};

		// Other
		iterator begin(void)
		{
			return (iterator(this->c.size() - 1, *this));
		}
		iterator end(void)
		{
			return (++iterator(0, *this));
		};
};

#endif