#include <iostream>
#include <string>

using namespace std;


int dumb()
{

	string name;

	int xp;
	int level;
	int gold;
	int hp;
	int lomps;
	int sklpts = 10;

	int skill[5] = { 0.0 };

	cout << "What is your name Stranger Moth?\n >>";
	cin >> name;

	for (int i = 0; i < size(skill); i++) {

		cout << "You Have" << sklpts << "left what skill would you to upgrade" << endl;
		cout << "1 = Power\n 2 = Agility\n 3 = Stamina\n 4 = Charisma\n 5 = Lumpther";
	}












	system("pause");
	return 0;
}