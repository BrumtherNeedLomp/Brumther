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

int generator;

int getNum() {
	return generator;
}

int randUno() {

	srand(time(NULL));
	generator = 1 + (rand() % 14);

	if (generator == 1 || generator == 8) {


		string w = "You have encountered the the dangerous of all the noodles, THE DANGERNOODLE.\n";
		for (int q = 0; q< w.size(); q++)
		{
			for (int e = 0; e <= 19999999; e++);
			cout << w[q];
		}
	}

	else if (generator == 2 || generator == 9) {

		string t = "SPOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOKY L-A-M-P, has turned on.\n";
		for (int r = 0; r< t.size(); r++)
		{
			for (int y = 0; y <= 19999999; y++);
			cout << t[r];
		}
	}
	else if (generator == 3 || generator == 10) {

		string s = "A shark looking fish with a sword on the smeller, it goes by POKEYFISH.\n";
		for (int a = 0; a< s.size(); a++)
		{
			for (int d = 0; d <= 19999999; d++);
			cout << s[a];
		}
	}
	else if (generator == 4 || generator == 11) {

		string x = "A dark figure stalking the internet on compooter... THE INDIAN MAN\n";
		for (int z = 0; z< x.size(); z++)
		{
			for (int c = 0; c <= 19999999; c++);
			cout << x[z];
		}
	}
	else if (generator == 5 || generator == 12) {

		string j = "You hear a squeeking noise in the distance... as you come closer you find out it's just Joey talking.. SWEGSAVAGEJR.\n";
		for (int k = 0; k < j.size(); k++)
		{
			for (int l = 0; l <= 19999999; l++);
			cout << j[k];
		}
	}
	else if (generator == 6 || generator == 13) {

		string u = "You hear a scream for milk... ""OH HE NEEDS SOME MILK"" but not any milk some.... CHOCOMALK!!!\n";
		for (int i = 0; i < u.size(); i++)
		{
			for (int o = 0; o <= 19999999; o++);
			cout << u[i];
		}
	}
	else if (generator == 7 || generator == 14) {

		string v = " You hear your laptop sreaming... it's coming from your 'bowser' history....... BOWSETTE!!!\n";
		for (int b = 0; b< v.size(); b++)
		{
			for (int n = 0; n <= 19999999; n++);
			cout << v[b];
		}
	}




	return 0;
}