#include <iostream>


int main() {


	int totalAmount = 4000000;
	int entrances = 10;
	int apartmentsEntrance = 40;
	int apartmentAmount = totalAmount / (entrances * apartmentsEntrance);

	std::cout << "Приветствуем вас в калькуляторе квартплаты! \n";
	std::cout << "Введите сумму, указанную в квитанции: " << totalAmount << "\n";
	std::cout << "Сколько подъездов в вашем доме? " << entrances << "\n";
	std::cout << "Сколько квартир в каждом подъезде? " << apartmentsEntrance << "\n";
	std::cout << "----Считаем----- \n";
	std::cout << "Каждая квартира должна заплатить по " << apartmentAmount << " руб";

}