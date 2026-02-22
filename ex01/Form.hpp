/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:25:54 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/22 12:36:15 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define FORM_HPP

#include <string>
#include <ostream>
#include <exception>

class	Bureaucrat;

class	Form
{
public:

	Form(std::string name, int sign_grade, int execute_grade);
	Form(Form const& copy);
	~Form();
	Form& operator=(Form const& copy);

	std::string const&	getName() const;
	bool				getIsSigned() const;
	int					getSignGrade() const;
	int					getExecGrade() const;

	void	beSigned(Bureaucrat const& b);

	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high for this form");
			}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low for this form");
			}
	};

private:

	std::string const	m_name;
	bool				m_is_signed;
	int const			m_sign_grade;
	int const			m_execute_grade;

};

std::ostream& operator<<(std::ostream &flow, Form const& form);

#endif