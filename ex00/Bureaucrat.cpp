/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:35:30 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 21:31:35 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
	// Default constructor
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src._name), _grade(src._grade)
{
	// Copy constructor
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	// Destructor
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this == &src)
		return (*this);
	_grade = src._grade;
	return (*this);
}

std::string const &Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade++;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooLowException();
	this->_grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high: you can't go higher than 150");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low: you can't go lower than 1");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}