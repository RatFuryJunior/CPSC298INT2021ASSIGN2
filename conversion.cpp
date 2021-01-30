#include <iostream>
//Nathaniel Cuadros

/*Problem 4(conversion.cpp):Write a program that will read in a length in feet
 *and inches and output the equivalent length in meters and centimeters.
 *Use at least threefunctions: one for user input,one or more for calculating, and one for output(console).
 *Include a loop that lets the user repeat this computation for new input values until the user says
 *he or she wants to end the program(user has to type exit).
 *There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
*/
using namespace std;

void consOutput(float result, int centiOrInch){//1 for centi 0 for inch
  if (centiOrInch == 0){
    cout << "The result is " << result << " centimeters or " << result/100 <<" Meters" << endl;
  }else if (centiOrInch == 1){
    cout << "The result is " << result << " inches or " << result/12 <<" feet" << endl;
  }
}
float centimetersToInch(float centimeters){ //calculation that retunrs inches
  float numOfInches = centimeters * 2.54; //convertsion rate from cent to int
  return numOfInches;
}
float inchToCentimeters(float inches){ //calculation that retunrs centimeters
  float numOfCent = inches * 0.393701; //convertsion rate from int to cent
  return numOfCent;
}

bool userInput(){
  string conversionChoice = "";
  float result = 0;
  float inches = 0;
  float feet = 0;
  float centimeters = 0;
  float meters = 0;

  cout<<endl<<"Would you like to change Imperial to Metric or Metric to Imperial?"<<endl;
  cout<< "Type imptomet or mettoimp, or type Exit to leave." <<endl;
  cin >> conversionChoice;

  if (conversionChoice == "exit" || conversionChoice == "Exit"){
    return false; // exit check that is returned to main.
  }

  else if(conversionChoice == "imptomet"){
    cout<<"How many feet?"<<endl; cin>>meters; cout<<"How many inches?"<<endl; cin>>centimeters; //input for imperial units
    centimeters = centimeters + (meters*100); //converts the combination of centimeters and meters to just centimeters

    result = centimetersToInch(centimeters); // this gets the conversion from centimeters to inches
    consOutput(result,0);
    return true;
  }
  else if (conversionChoice == "mettoimp"){
    cout<<"How many meters?"<<endl; cin>>feet; cout<<"How many centimeters?"<<endl; cin>>inches; //input for metric units
    inches = inches + (feet*12); //converts the combination of feet and inches to just inches

    result = inchToCentimeters(inches); // this gets the conversion from inches to centimeters
    consOutput(result,1);
    return true;
  }

  else{
    cout<< "Something went wrong, try checking the converstion choice you entered" <<endl;
  }
  return true;
}

int main (int argc, char** argv){
  bool exitSentinal = true;   // the while loop that loops till the conversionChoice is entered as exit or Exit by the user.
  while(exitSentinal){
    exitSentinal = userInput();
  }
  cout <<"See ya!"<<endl;
}
