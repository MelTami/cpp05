/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:31 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 21:46:24 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm: public AForm
{
private:
    std::string	_target;
public:
    PresidentialPardonForm(std::string target); // Default constructor
	PresidentialPardonForm(const PresidentialPardonForm &src); // Copy constructor
	~PresidentialPardonForm(); // Destructor
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src); // Assignment operator

    void        execute(Bureaucrat const & executor) const;
};

#endif