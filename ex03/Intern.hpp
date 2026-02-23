/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:42:25 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/23 15:39:04 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <exception>
#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const& copy);
	~Intern();
	Intern& operator=(Intern const& copy);

	AForm* makeForm(std::string formName, std::string target) const;

	AForm* CreateShrubberyForm(std::string target) const;
	AForm* CreateRobotomyForm(std::string target) const;
	AForm* CreatePresidentialForm(std::string target) const;

	class	nonExistentForm : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("This type of form does not exist");
			}
	};
};

#endif
