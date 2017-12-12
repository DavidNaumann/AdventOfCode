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
int getints(string currfile,int listints[]);
// Decrypt for part one
int decrypt(int listints[],int totalchars);
// Decrypt for part two
int midecrypt(int listints[],int totalchars);

#endif