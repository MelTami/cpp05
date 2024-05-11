/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:31 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 18:40:28 by mvavasso         ###   ########.fr       */
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
    PresidentialPardonForm(); // Default constructor
	PresidentialPardonForm(const PresidentialPardonForm &src); // Copy constructor
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm(); // Destructor
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src); // Assignment operator

    void        execute(Bureaucrat const & executor) const;
};

#endif