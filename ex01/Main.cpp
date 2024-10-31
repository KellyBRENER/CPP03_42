/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:51:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/31 11:18:29 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	trap_1("bob");//check constructor
	ClapTrap	trap_2;
	trap_2 = trap_1;//check assignment operator
	ClapTrap	trap_3(trap_2);//check copy constructor
	std::cout<<"ClapTrap trap_1 name is "<<trap_1.getName()<<std::endl;
	std::cout<<"ClapTrap trap_2 name is "<<trap_2.getName()<<std::endl;
	std::cout<<"ClapTrap trap_3 name is "<<trap_3.getName()<<std::endl;
	trap_2.setName("arthur");
	trap_3.setName("fabrice");
	std::cout<<"ClapTrap trap_2 name is now "<<trap_2.getName()<<std::endl;
	std::cout<<"ClapTrap trap_3 name is now "<<trap_3.getName()<<std::endl;
	trap_1.attack("a human passing by");
	trap_1.attack(trap_2.getName());
	trap_2.takeDamage(trap_1.getAttackDamage());
	trap_3.beRepaired(30);
	trap_1.attack(trap_3.getName());
	trap_3.takeDamage(trap_1.getAttackDamage());
	trap_1.attack("another human passing by");
	trap_1.attack("one more human passing by");
	trap_1.attack("one more human passing by");
	trap_1.attack("one more human passing by");
	trap_1.attack("one more human passing by");
	trap_1.attack("one more human passing by");
	trap_1.attack("one more human passing by");
	trap_1.attack("one more human passing by");
	std::cout<<trap_1.getName()<<" was really a nasty boy..."<<std::endl;
	trap_2.beRepaired(20);
}
