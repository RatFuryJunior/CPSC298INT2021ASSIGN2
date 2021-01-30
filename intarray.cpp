#include <iostream>
#include <string>
#include <sstream>
//Nathaniel Cuadros

using namespace std;
//takes in the up to 10 command line params that are assumed to be printStudentInfo
//it then puts them all in an array and prints the array.
int main (int argc, char** argv){
  int numElements = argc;
  int intArray[numElements];

  for (int i = 1; i < numElements; i ++){
    int value = 0;
    stringstream theString(argv[i]); //used https://www.geeksforgeeks.org/converting-strings-numbers-cc/
    theString >> value;
    intArray[i] = value;
  }

  for (int i = 1; i < argc; i ++){
    cout << intArray[i] << endl;
  }

}
