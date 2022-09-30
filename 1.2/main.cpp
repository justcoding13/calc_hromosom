#include <iostream>
#include <string>
#include "plus.hpp"
using namespace std;
int main() {
	cout << "Калькулятор хромосом v1.2" << endl;
	cout << "Что в новой версии: Изменения в дизайне, для удобства некоторые вещи перемещены в заголовочный файл." << endl;
	cout << "Вы за ЗОЖ?\n 1 = да\n 0 = нет " << endl;
	cin >> vopros1;
	if (vopros1 == 0) {
		xpomocom++;
	} else if (vopros1 == 1) {
		xpomocom = xpomocom;
	} else {
		cout << "Ошибка: не указан ответ. Будет начислина 1 хромосома за пропуск";
		xpomocom++;
	}
	cout << "\nВы играете в GenshinImpact/Roblox/Brawlstars? \n2 = Это мои любимые игры \n1 = Иногда играю, нравится \n0 = нет" << endl;;
	cin >> vopros2;
	if (vopros2 == 2) {
		xpomocom += 6;
	} else if (vopros2 == 1) {
		xpomocom += 3;
	} else if (vopros2 == 0) {
		xpomocom = xpomocom;
	} else {
		cout << "Ошибка: не указан ответ. Будет начислина 1 хромосома за пропуск";
		xpomocom++;
	}
	cout << "\nВы залипаете в Tiktock/Likee? \n3 = Я там снимаю \n2 = Сижу в TikTock \n1 = Сижу в Likee\n 0 = Нигде не сижу, стула нету X_X" << endl;
	cin >> vopros3;
	if (vopros3 == 3) {
		xpomocom += 4;	
	} else if (vopros3 == 2) {
		xpomocom++;
	} else if (vopros3 == 1) {
		xpomocom += 2;
	} else if (vopros3 == 0) {
		xpomocom = xpomocom;
	} else {
		cout << "Ошибка: не указан ответ. Будет начислина 1 хромосома за пропуск";
		xpomocom++;
	}
	cout << "\nВы смотрите таких блогеров как: Влад бумага, мистер макс, мисс кейти? \n1 = я смотрю мистера макса/мисс кейти \n2 = я смотрю влада бумагу \n3 = всех сразу \n4 = не смотрю" << endl;
	cin >> vopros4;
	if (vopros4 == 1) {
		xpomocom += 7;
	} else if (vopros4 == 2) {
		xpomocom += 5;
	} else if (vopros4 == 3) {
		xpomocom += 12;
	} else if (vopros4 == 4) {
		xpomocom = xpomocom;
	} else {
		cout << "Ошибка: не указан ответ. Будет начислина 1 хромосома за пропуск";
		xpomocom++;
	}
	cout << "\nВы токсик? \n1 = да \n0 = нет" << endl;
	cin >> vopros5;
	if (vopros5 == 1) {
		xpomocom++;
	} else if (vopros5 == 0) {
		xpomocom = xpomocom;
	} else {
		cout << "Ошибка: не указан ответ. Будет начислина 1 хромосома за пропуск";
		xpomocom++;
	}
	cout << "\nВы лох? \n1 = да \n0 = нет" << endl;
	cin >> vopros6;
	if (vopros6 == 0) {
		xpomocom++;
	} else if (vopros6 == 1) {
		xpomocom = xpomocom;
	} else {
		cout << "Ошибка: не указан ответ. Будет начислина 1 хромосома за пропуск";
		xpomocom++;
	}
	cout << "Результат: " << xpomocom << " Хромосом" << endl;
}
