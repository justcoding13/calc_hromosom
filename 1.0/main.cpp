#include <iostream>
#include <string>
using namespace std;
int main() {
	int xpomocom = 46;
	short vopros1;
	short vopros2;
	short vopros3;
	cout << "Калькулятор хромосом v1.0" << endl;
	cout << "Вы за ЗОЖ? (1 = да 0 = нет) ";
	cin >> vopros1;
	if (vopros1 == 0) {
		xpomocom++;
	}
	cout << "\nВы играете в Standoff2/Dota2/Brawlstars (2 = Это мои любимые игры 1 = Иногда играю, нравится 0 = нет)?";
	cin >> vopros2;
	if (vopros2 == 2) {
		xpomocom += 5;
	} else if (vopros2 == 1) {
		xpomocom++;
	}
	cout << "\nВы залипаете в Tiktock/Likee? (3 = Я там снимаю 2 = Сижу в TikTock 1 = Сижу в Likee 0 = Нигде не сижу, стула нету X_X)";
	cin >> vopros3;
	if (vopros3 == 3) {
		xpomocom += 10;	
	} else if (vopros3 == 2) {
		xpomocom += 1;
	} else if (vopros3 == 1) {
		xpomocom += 5;
	}
	cout << "Результат: " << xpomocom << " Хромосом" << endl;
}