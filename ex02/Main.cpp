/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:51:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 11:29:46 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include"FragTrap.hpp"

int	main(void) {
	std::cout<<"**déclaration du Claptrap bob**"<<std::endl;
	ClapTrap	trap_1("bob");
	std::cout<<"**déclaration du scavtrap fabrice**"<<std::endl;
	ScavTrap	trap_2("fabrice");//check constructor
	std::cout<<"**déclaration du fragtrap arthur**"<<std::endl;
	FragTrap	trap_3("arthur");
	trap_1.attack("a human passing by");
	trap_2.attack("a human passing by");
	trap_3.attack("a human passing by");
	trap_1.attack(trap_2.getName());
	trap_2.takeDamage(trap_1.getAttackDamage());
	trap_3.beRepaired(30);
	trap_2.guardGate();
	trap_3.highFivesGuys();
}
