#include "header.h"

int main()
{
  // File it is reading
  string currfile = "..//..//Inputs//input2.txt";
  // List of ints to store current numbers
  int listints[16][16];
  int checksum;
  int checkdiv;
  
  // Function
  getints(currfile,listints);
  checksum = sum(listints);
  checkdiv = modcheck(listints);
  cout << "Part 1: " << checksum << endl;
  cout << "Part 2: " << checkdiv << endl;
  return 0;
}