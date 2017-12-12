#include "header.h"

int main()
{
  // Total amount of characters
  int totalchars;
  // Sum of part one
  int partone;
  // Sum of part two
  int parttwo;
  // File it is reading
  string currfile = "./Inputs/input1.txt";
  // List of ints to store current numbers
  int listints[9999];
  
  // Function
  
  totalchars = getints(currfile,listints);
  partone = decrypt(listints,totalchars);
  cout << "Part 1: " << partone << endl;
  parttwo = midecrypt(listints,totalchars);
  cout << "Part 2: " << parttwo << endl;
  return 0;
}