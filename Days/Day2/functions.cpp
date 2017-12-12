#include "header.h"

int getints(string currfile,int listints[16][16])
{
  // Input file variable
  ifstream fin;
  // Counts through the file
  int counter = 0;
  int line = 0;
  // Stores temporary character
  int tempint;
  
  // Function
  
  fin.open(currfile.c_str());
  while(fin >> tempint)
  {
    listints[line][counter] = tempint;
    counter++;
    if(counter == 16)
    {
      line++;
      counter = 0;
    }
  }
  fin.close();
  return counter;
}

int sum(int listints[16][16])
{
  int checksum = 0;
  int counterx;
  int countery;
  int minx;
  int maxx;
  for(countery = 0; countery < 16; countery++)
  {
    minx = listints[countery][0];
    maxx = listints[countery][0];
    for(counterx= 1; counterx < 16; counterx++)
    {
      if(listints[countery][counterx] < minx)
      {
        minx = listints[countery][counterx];
      }
      if(listints[countery][counterx] > maxx)
      {
        maxx = listints[countery][counterx];
      }
    }
  checksum += (maxx-minx);
  }
  return checksum;
}

int modcheck(int listints[16][16])
{
  int checksum = 0;
  int counterx;
  int countersx;
  int countery;
  int first;
  int second;
  for(countersx = 0; countersx < 16; countersx++)
  {
    for(countery = 0; countery < 16; countery++)
    {
      first = listints[countery][countersx];
      for(counterx = 0; counterx < 16; counterx++)
      {
        second = listints[countery][counterx];
        if(counterx != countersx)
        {
        checksum += ((first!=second && first%second == 0) ? (first/second) : 0);
        }
      }
    }
  }
  return checksum;
}