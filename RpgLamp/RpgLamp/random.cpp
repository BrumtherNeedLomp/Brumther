#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <time.h>

using namespace std;

int main() {

	int dangerNoodle;
	int spookylamp;
	int pokeyfish;
	int indianMan;
	int swegsavagejr;
	int bowsette;
	int generator;

	generator = rand() % 5 + 1;

	if (generator == 1) {


		string s = " You have encountered the the dangerous of all the noodles, The DangerNoodle.\n";
		for (int j = 0; j< s.size(); j++)
		{
			for (int i = 0; i <= 19999999; i++);
			cout << s[j];
		}

		cout << " You have encountered the the dangerous of all the noodles, The DangerNoodle. " << endl;

		system("pause");
	}

	else if (generator == 2) {

		string s = "SPOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOKY L-A-M-P, has turned on.\n";
		for (int j = 0; j< s.size(); j++)
		{
			for (int i = 0; i <= 19999999; i++);
			cout << s[j];
		}
	}
	else if (generator == 3) {

		string s = " A shark looking fish with a sword on the smeller, it goes by PokeyFish.\n";
		for (int j = 0; j< s.size(); j++)
		{
			for (int i = 0; i <= 19999999; i++);
			cout << s[j];
		}
	}
	else if (generator == 4) {

		string s = " A dark figure stalking the internet on compooter... The Indian Man.\n";
		for (int j = 0; j< s.size(); j++)
		{
			for (int i = 0; i <= 19999999; i++);
			cout << s[j];
		}
	}
	else if (generator == 5) {

		string s = " You hear a squeeking noise in the distance... as you come closer you find out it's just Joey talking.. SWEGSAVAGEJR.\n";
		for (int j = 0; j< s.size(); j++)
		{
			for (int i = 0; i <= 19999999; i++);
			cout << s[j];
		}
		cout << " You hear a squeeking noise in the distance... as you come closer you find out it's just Joey talking.. SWEGSAVAGEJR. " << endl;
		system("pause");
	}



	system("pause");
	return 0;
}
