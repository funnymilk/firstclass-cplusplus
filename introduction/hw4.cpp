/*

Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 (включительно), если да – вывести true, в противном случае – false;

Написать программу, проверяющую, является ли некоторое число - натуральным простым. Простое число - это число, которое делится без остатка только на единицу и себя само.

Написать программу, выводящую на экран “истину”, если две целочисленные константы, объявленные в её начале либо равны десяти сами по себе, либо их сумма равна десяти.

Написать программу, которая определяет является ли год високосным. Каждый 4-й год является високосным, кроме каждого 100-го, при этом каждый 400-й – високосный. Для проверки работы вывести результаты работы программы в консоль

*/

#include <iostream>

int main(){
//задание 1
	int a = 3;
	int b = 1;
	int s = a + b;
	if ((s >= 10) && (s <=20)){
		std::cout << "True" << std::endl;		
	} else std::cout << "False" << std::endl;

//задание2
	int m = 1;
	int d = m;
	int t = 0;
	if (m == 1) {
		std::cout << "Число равно единице" << std::endl;
	}
	else {
		while (d > 1){
			if (m % d == 0){
				t++;
			}
			d = d - 1;
		}		
		if (t == 1) {
			std::cout << "Число простое" << std::endl;
		} 
		else {
			std::cout << "Число не простое" << std::endl;
		}
	}
	

//задание 3
	int n = 12;
	int k = 10;
	if ((n == 10) || (k == 10)){
		std::cout << "True" << std::endl;
	}
	else if ((n + k) == 10){
		std::cout << "True" << std::endl;
	} else std::cout << "False" << std::endl;
	
//задание 4
	int year = 2021;
	
	if ((year % 4) == 0) {
		std::cout << "Visokos"<< std::endl;
	}
	else if (((year % 100) == 0) && ((year % 400) == 0)) {
		std::cout << "Visokos"<< std::endl;
	} else std::cout << "ne Visokos"<< std::endl;

	return 0;
}
