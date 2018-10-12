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



int shop()

{
	int quotes;
	int merchant;

	srand(time(NULL));
	quotes = 1 + (rand() % 6);
	
	if (quotes == 1) {
		cout << " Whaddaya buyin'? " << endl;
	}
	else if (quotes == 2) {
		cout << " Over here, stranger! " << endl;
	}
	else if (quotes == 3) {
		cout << " Got some rare things on sale, stranger! " << endl;
	}
	else if (quotes == 4) {
		cout << " Welcome! " << endl;
	}
	else if (quotes == 5) {
		cout << " Got somethin' that might interest ya'. " << endl;
	}
	else if (quotes == 6) {
		cout << " Got a selection of good things on sale, stranger. " << endl;
	}





	system("pause");
	return 0;
}