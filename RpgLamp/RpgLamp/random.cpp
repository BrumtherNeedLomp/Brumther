#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <time.h>
#define HEADER_H_
#include "Header.h"
#include <stdio.h>     
#include <stdlib.h>

using namespace std;

int spookyLamp[5] = { 15 , 6, 15, 6, 2 };

int randUno() {



	int dangerNoodle;
	int spookylamp;
	int pokeyfish;
	int indianMan;
	int swegsavagejr;
	int bowsette;
	int chocomalk;
	int generator;

	srand(time(NULL));
	generator = 1 + (rand() % 10);

	if (generator == 1 || generator == 6) {


		string w = "You have encountered the the dangerous of all the noodles, THE DANGERNOODLE.\n";
		for (int q = 0; q< w.size(); q++)
		{
			for (int e = 0; e <= 19999999; e++);
			cout << w[q];
		}
	}

	else if (generator == 2 || generator == 7) {

		string t = "SPOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOKY L-A-M-P, has turned on.\n";
		for (int r = 0; r< t.size(); r++)
		{
			for (int y = 0; y <= 19999999; y++);
			cout << t[r];
		}
	}
	else if (generator == 3 || generator == 8) {

		string s = "A shark looking fish with a sword on the smeller, it goes by POKEYFISH.\n";
		for (int a = 0; a< s.size(); a++)
		{
			for (int d = 0; d <= 19999999; d++);
			cout << s[a];
		}
	}
	else if (generator == 4 || generator == 9) {

		string x = "A dark figure stalking the internet on compooter... THE INDIAN MAN\n";
		for (int z = 0; z< x.size(); z++)
		{
			for (int c = 0; c <= 19999999; c++);
			cout << x[z];
		}
	}
	else if (generator == 5 || generator == 10) {

		string j = "You hear a squeeking noise in the distance... as you come closer you find out it's just Joey talking.. SWEGSAVAGEJR.\n";
		for (int k = 0; k< j.size(); k++)
		{
			for (int l = 0; l <= 19999999; l++);
			cout << j[k];
		}
	}



	
	return 0;
}