/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:00:58 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/01 19:51:04 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <string>

class	PresidentialPardonForm : public	AForm
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& copy);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);

	virtual void	executeF() const;

private:
	std::string	m_target;
};