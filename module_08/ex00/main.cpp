/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:58:36 by lle-bret          #+#    #+#             */
/*   Updated: 2023/04/17 14:17:26 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>

int	main()
{
	std::vector<int> v (10);
	std::array<std::string, 100> a;
	
	v[5] = 42;
	std::cout << easyfind(v, 42) << std::endl;
	std::cout << easyfind(v, 43) << std::endl;
}