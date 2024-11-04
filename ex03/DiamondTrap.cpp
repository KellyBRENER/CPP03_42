/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:48:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 11:09:58 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "DiamondTrap.hpp"

/*CONSTRUCTORS/DESTRUCTOR*/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout<<"DiamondTrap default constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + " the ClapTrap"),
ScavTrap(name), FragTrap(name), _name(name + " the DiamondTrap") {
	std::cout<<"DiamondTrap constructor called"<<std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDammage = FragTrap::_attackDammage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {
	*this = src;
	std::cout<<"DiamondTrap copy constructor called"<<std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout<<"DiamondTrap destructor called"<<std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& src) {
	std::cout<<"DiamondTrap assignation operator called"<<std::endl;
	ClapTrap::operator=(src);
	_name = src.getName();
	return (*this);
}

/*MEMBER FUNCTIONS*/

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout<<"Am I "<<_name<<" or "<<ClapTrap::_name<<" ?"<<std::endl;
}
