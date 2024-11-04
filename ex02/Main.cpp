/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:51:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 10:57:33 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	std::cout<<"**déclaration du scavtrap bob**"<<std::endl;
	ScavTrap	trap_1("bob");//check constructor
	std::cout<<"**déclaration du Claptrap copy de bob**"<<std::endl;
	ClapTrap	trap_4(trap_1);
	std::cout<<"**déclaration du scavtrap copy de bob**"<<std::endl;
	ScavTrap	trap_2(trap_1);
	std::cout<<"**déclaration du scavtrap fabrice**"<<std::endl;
	ScavTrap	trap_3("fabrice");//check copy constructor
	std::cout<<"**utilisation de l'operateur d'assignation d'un claptrap\
 sur un scavtrap (l'inverse n'est pas possible)**"<<std::endl;
	trap_4 = trap_3;
	trap_2.setName("arthur");
	trap_3.setName("fabrice");
	trap_1.attack("a human passing by");
	trap_3.attack("a human passing by");
	trap_4.attack("a human passing by");
	trap_1.attack(trap_2.getName());
	trap_2.takeDamage(trap_1.getAttackDamage());
	trap_3.beRepaired(30);
	trap_1.attack(trap_3.getName());
	trap_3.takeDamage(trap_1.getAttackDamage());
	trap_1.attack("another human passing by");
	trap_2.guardGate();
}
