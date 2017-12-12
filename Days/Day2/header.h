#ifndef DAYONE
#define DAYONE

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include<string.h>
#include<math.h>

using namespace std;


// Reads and gets text
int getints(string currfile,int listints[16][16]);

int sum(int listints[16][16]);

int modcheck(int listints[16][16]);

#endif