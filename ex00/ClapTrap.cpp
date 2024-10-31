/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:52:36 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/31 10:34:49 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

/*constructor/destructor*/
ClapTrap::ClapTrap(void) : _hitPoints(10),
_attackDammage(10), _energyPoints(10) {
	std::cout<<"ClapTrap default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(const std::string & name) : _name(name), _hitPoints(10),
_attackDammage(10), _energyPoints(10) {
	std::cout<<"ClapTrap constructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) : _hitPoints(10),
_attackDammage(10), _energyPoints(10) {
	_name = src.getName();
	_hitPoints = src.getHitPoints();
	_attackDammage = src.getAttackDamage();
	_energyPoints = src.getEnergyPoints();
	std::cout<<"ClapTrap copy constructor called"<<std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout<<"ClapTrap destructor called"<<std::endl;
}

/*operator overload*/
ClapTrap&	ClapTrap::operator=(const ClapTrap& src) {
	_name = src.getName();
	_hitPoints = src.getHitPoints();
	_attackDammage = src.getAttackDamage();
	_energyPoints = src.getEnergyPoints();
	return *this;
}

/*getter/setter*/
std::string	ClapTrap::getName(void) const {
	return _name;
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return _hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return _energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return _attackDammage;
}

/*member functions*/
void	ClapTrap::attack(const std::string& target) {
	if (_hitPoints == 0) {
		std::cout<<"attack cancelled because "<<_name<<\
		" is dead, no more hitPoints"<<std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout<<_name<<"cannot attack "<<target<<\
		", no more energy point"<<std::endl;
		return;
	}
	_energyPoints--;
	std::cout<<"ClapTrap "<<_name<<"attacks "<<target<<\
	", causing "<<_attackDammage<<" points of damage!"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout<<"ClapTrap "<<_name<<" is already dead"<<std::endl;
		return;
	}
	_hitPoints -= amount;
	std::cout<<"ClapTrap "<<_name<<" take "<<amount<<" damages"<<std::endl;
	if (_hitPoints <= 0) {
		_hitPoints = 0;
		std::cout<<"ClapTrap "<<_name<<" is totally destroyed"<<std::endl;
		return;
	}
	std::cout<<"ClapTrap "<<_name<<" has "<<_hitPoints<<\
	" hit points left"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {}
