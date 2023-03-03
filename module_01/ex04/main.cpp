/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <lle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:44:58 by lle-bret          #+#    #+#             */
/*   Updated: 2023/02/22 15:39:58 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	ft_replace(fstream& file, fstream& file_replace, string s1, string s2)
{
	string	content;
	string	line;
	size_t	pos;
	size_t	tmp;

	(void) file_replace;
	while (getline(file, line))
	{
		content += line;
		if (file.good())
			content += "\n";
	}
	tmp = 0;
	pos = content.find(s1, 0);
	while (pos != string::npos)
	{
		file_replace << content.substr(tmp, pos - tmp);
		file_replace << s2;
		tmp = pos + s1.length();
		pos = content.find(s1, tmp);
	}
	file_replace << content.substr(tmp, content.length() - tmp);
}

int main(int ac, char **av)
{
	fstream	file;
	fstream	file_replace;

	if (ac != 4)
	{
		cout << "Wrong number of parameters (expected 3)." << endl;
		return (0);
	}
	file.open(av[1], ios::in);
	if (!file)
	{
		cout << "File could not be opened." << endl;
		return (0);
	}
	file_replace.open(string(av[1]) + string("_replace"), ios::out);
	if (!file_replace)
		cout << "Failed to create new file." << endl;
	else
	{
		ft_replace(file, file_replace, string(av[2]), string(av[3]));
		file_replace.close();
	}
	file.close();
	return (0);
}