// 99 bottles of beer on the wall

// you could try some sort of string implementation where the string degrades very gradually into complete incoherence while keeping the same number of non-space characters
// and punctuation
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{    
    int i;
       
    for(i = 99; i > 0; i--)
    {
          if(i > 3)
             cout << i << " bottles of beer on the wall, " << i << " bottles of beer,\n"
                  << "Take one down, pass it around, " << i-1 << " bottles of beer on the wall.\n";
          if(i == 2)
          {
             cout << i << " bottles of beer on the wall, " << i << " bottles of beer,\n"
                  << "Take one down, pass it around, " << i-1 << " bottle of beer on the wall\n";
          }
          else if(i < 2)
          {
              cout << i << " bottle of beer on the wall, " << i << " bottle of beer,\n"
                   << "Take it down, pass it around...and then we're all out of beers on the wall!\n";
          }// end if
		  Sleep(4000);
    }// end for
    
    cout << "\nPresh any kee too continyoooo...";
    _getch();
}// end main()
