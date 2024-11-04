/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:48:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 11:09:58 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScavTrap.hpp"

/*CONSTRUCTORS/DESTRUCTOR*/

ScavTrap::ScavTrap() {
	std::cout<<"ScavTrap default constructor called"<<std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout<<"ScavTrap constructor called"<<std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDammage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
	std::cout<<"ScavTrap copy constructor called"<<std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout<<"ScavTrap destructor called"<<std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& src) {
	std::cout<<"ScavTrap assignation operator called"<<std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

/*MEMBER FUNCTIONS*/

void	ScavTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout<<"attack cancelled because "<<"ScavTrap "<<_name<<\
		" is destroy, no more hitPoints..."<<std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout<<"ScavTrap "<<_name<<"cannot attack "<<target<<\
		", no more energy point..."<<std::endl;
		return;
	}
	_energyPoints--;
	std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<\
	", causing "<<_attackDammage<<" points of damage!"<<std::endl;
}

void	ScavTrap::guardGate() {
	std::cout<<"ScavTrap "<<_name<<" is now in Gate keeper mode"<<std::endl;
}
