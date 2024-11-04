/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:48:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 11:23:16 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"

/*CONSTRUCTORS/DESTRUCTOR*/

FragTrap::FragTrap() {
	std::cout<<"FragTrap default constructor called"<<std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout<<"FragTrap constructor called"<<std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDammage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
	std::cout<<"FragTrap copy constructor called"<<std::endl;
}

FragTrap::~FragTrap() {
	std::cout<<"FragTrap destructor called"<<std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& src) {
	std::cout<<"FragTrap assignation operator called"<<std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

/*MEMBER FUNCTIONS*/

void	FragTrap::highFivesGuys() {
	std::cout<<"FragTrap "<<_name<<" asks for a positive high five !"<<std::endl;
}
