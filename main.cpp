#include <iostream>
#include <string>
using namespace std;
int main() {
	int xpomocom = 46;
	short vopros1;
	short vopros2;
	short vopros3;
	short vopros4;
	short vopros5;
	short vopros6;
	cout << "Калькулятор хромосом v1.1" << endl;
	cout << "Что в новой версии: Новые вопросы, более точное измерение количества хромосом" << endl;
	cout << "Вы за ЗОЖ? (1 = да 0 = нет) ";
	cin >> vopros1;
	if (vopros1 == 0) {
		xpomocom++;
	}
	cout << "\nВы играете в Standoff2/Dota2/Brawlstars (2 = Это мои любимые игры 1 = Иногда играю, нравится 0 = нет)?";
	cin >> vopros2;
	if (vopros2 == 2) {
		xpomocom += 6;
	} else if (vopros2 == 1) {
		xpomocom += 3;
	}
	cout << "\nВы залипаете в Tiktock/Likee? (3 = Я там снимаю 2 = Сижу в TikTock 1 = Сижу в Likee 0 = Нигде не сижу, стула нету X_X)";
	cin >> vopros3;
	if (vopros3 == 3) {
		xpomocom += 4;	
	} else if (vopros3 == 2) {
		xpomocom++;
	} else if (vopros3 == 1) {
		xpomocom += 2;
	}
	cout << "\nВы смотрите таких блогеров как: Влад бумага, мистер макс, мисс кейти? (1 = я смотрю мистера макса/мисс кейти 2 = я смотрю влада бумагу 3 = всех сразу 4 = не смотрю)" << endl;
	cin >> vopros4;
	if (vopros4 == 1) {
		xpomocom += 7;
	} else if (vopros4 == 2) {
		xpomocom += 5;
	} else if (vopros4 == 3) {
		xpomocom += 12;
	}
	cout << "\nВы токсик? (1 = да 0 = нет)";
	cin >> vopros5;
	if (vopros5 == 1) {
		xpomocom++;
	}
	cout << "\nВы лох? (1 = да 0 = нет)";
	cin >> vopros6;
	if (vopros6 == 0) {
		xpomocom++;
	}
	cout << "Результат: " << xpomocom << " Хромосом" << endl;
}
