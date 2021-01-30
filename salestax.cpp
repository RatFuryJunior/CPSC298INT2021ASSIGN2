#include <iostream>
//Nathaniel Cuadros
using namespace std;

float addTax(float taxRate, float cost){
  return ((taxRate+1) * cost);
}
//takes in two cmd line params, first one is the Rate and second being the const
//it then outputs to the cons the new cost with the tax.
int main (int argc, char** argv){
  float userRate = stof(argv[1]);
  float userCost = stof(argv[2]);
  cout<< addTax(userRate,userCost)<<endl;
}
