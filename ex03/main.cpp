/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:35:42 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 19:00:20 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	srand(time(NULL));

	Bureaucrat	ness("Ness", 2);
	Bureaucrat	hero("Hero", 150);
	Bureaucrat	rob("Rob", 50);
	AForm		*form;
	Intern		intern;

	form = intern.makeForm("robotomy request", "Donkey Kong");
	rob.signForm(*form);
	rob.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential pardon", "Diddy Kong");
	rob.signForm(*form);
	rob.executeForm(*form);
	delete form;
	form = intern.makeForm("shrubbery creation", "Dixie Kong");
	rob.signForm(*form);
	rob.executeForm(*form);
	delete form;
}