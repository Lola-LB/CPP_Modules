/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:44:16 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 12:00:53 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T, typename U >
void	iter( T * addr, int len, U ( *func )( T ) )
{
	int	i = -1;
	while (++i < len)
		func(addr[i]);
}

#endif