#include <iostream>

int main() {

	int durationTime = 480;
	int customerTime = 2;
	int cashierTime = 4;
	int change = durationTime / (customerTime + cashierTime);


	std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену. \n";
	std::cout << "Введите длительность смены в минутах: " << durationTime << "\n";
	std::cout << "Сколько минут клиент делает заказ? " << customerTime << "\n";
	std::cout << "Сколько минут кассир собирает заказ? " << cashierTime << "\n";
	std::cout << "=====Считаем===== \n";
	std::cout << "За смену длиной " << durationTime << " минут кассир успеет обслужить " << change << " клиентов";

}