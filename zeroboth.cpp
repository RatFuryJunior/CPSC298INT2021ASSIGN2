#include <iostream>
//Nathaniel Cuadros
using namespace std;

void zeroBoth(int &one, int &two){
  one = 0;
  two = 0;
}
//takes in two cmd line params and retunrs and prints both as a 0
int main (int argc, char** argv){
  int intOne = strtol(argv[1],NULL,10); //used https://stackoverflow.com/questions/9748393/how-can-i-get-argv-as-int/38669018
  int intTwo = strtol(argv[2],NULL,10);
  zeroBoth(intOne, intTwo);
  cout<< intOne << " " << intTwo << endl;
}
