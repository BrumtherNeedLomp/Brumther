#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <time.h>
#define HEADER_H_
#include "Header.h"
#include <stdio.h>     
#include <stdlib.h>
using namespace std;

int xpamount;

int xpAdd()
{
	int xpAdd;
	int xpSubtract;

	srand(time(NULL));
	xpAdd = 20 + (rand() % 50);

	srand(time(NULL));
	xpSubtract =10 + (rand() % 14);

	xpamount = xpAdd - xpSubtract;



	return 0;
}

