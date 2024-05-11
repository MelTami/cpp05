/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:00:25 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 19:27:37 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
private:
public:
    Intern(); // Default constructor
	Intern(const Intern &src); // Copy constructor
	~Intern(); // Destructor
	Intern	&operator=(const Intern &src); // Assignment operator

    AForm*   makeForm(std::string form_name, std::string target);

    class FormNotFoundException: public std::exception
	{
			virtual const char *what() const throw();
	};
};


#endif