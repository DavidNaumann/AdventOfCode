#include "header.h"

int getints(string currfile,int listints[])
{
  // Input file variable
  ifstream fin;
  // Counts through the file
  int counter = 0;
  // Stores temporary character
  char tempchar;
  
  // Function
  
  fin.open(currfile.c_str());
  while(fin.get(tempchar))
  {
    listints[counter] = (static_cast<int>(tempchar) - 48);
    counter++;
  }
  listints[counter] =  listints[0];
  fin.close();
  return counter;
}

int decrypt(int listints[],int totalchars)
{
  // Counts through list of ints
  int counter;
  // Stores temporary int
  int tempint;
  // Int used to check against for matching
  int checkint;
  // Output sum from decrypter
  int sum = 0;
  
  // Function
  
  tempint = listints[0];
  for(counter = 1; counter < totalchars+1; counter++)
  {
    checkint = listints[counter];
    if(tempint == checkint)
    {
      if(tempint == listints[counter-1])
      {
      sum += tempint;
      }
    tempint = listints[counter + 1];
    }
  }
  return sum;
}

int midecrypt(int listints[],int totalchars)
{
  // Finds middle
  int mid = totalchars/2;
  // Counts through list
  int counter;
  // Output sum for part two
  int sum = 0;
  
  // Function
  
  for(counter = 0; counter < mid; counter++)
  {
    if(listints[counter]==listints[(mid+counter)])
    {
      sum += listints[counter];
    }
  }
  sum *= 2;
  return sum;
}