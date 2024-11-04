/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:51:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 12:52:28 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	std::cout<<"**déclaration du Claptrap bob**"<<std::endl;
	ClapTrap	trap_1("bob");
	std::cout<<"**déclaration du scavtrap fabrice**"<<std::endl;
	ScavTrap	trap_2("fabrice");//check constructor
	std::cout<<"**déclaration du fragtrap arthur**"<<std::endl;
	FragTrap	trap_3("arthur");
	std::cout<<"**déclaration du diamondtrap arthice**"<<std::endl;
	DiamondTrap	trap_4("arthice");
	trap_1.attack("a human passing by");
	trap_2.attack("a human passing by");
	trap_3.attack("a human passing by");
	trap_4.attack("a human passing by");
	std::cout<<trap_1.getName()<<" has "<<trap_1.getHitPoints()<<" hit points, "\
	<<trap_1.getEnergyPoints()<<" energy points, "<<trap_1.getAttackDamage()<<\
	" attack damage."<<std::endl;
	std::cout<<trap_2.getName()<<" has "<<trap_2.getHitPoints()<<" hit points, "\
	<<trap_2.getEnergyPoints()<<" energy points, "<<trap_2.getAttackDamage()<<\
	" attack damage."<<std::endl;
	std::cout<<trap_3.getName()<<" has "<<trap_3.getHitPoints()<<" hit points, "\
	<<trap_3.getEnergyPoints()<<" energy points, "<<trap_3.getAttackDamage()<<\
	" attack damage."<<std::endl;
	std::cout<<trap_4.getName()<<" has "<<trap_4.getHitPoints()<<" hit points, "\
	<<trap_4.getEnergyPoints()<<" energy points, "<<trap_4.getAttackDamage()<<\
	" attack damage."<<std::endl;
	trap_4.guardGate();
	trap_4.highFivesGuys();
	trap_4.whoAmI();
}
