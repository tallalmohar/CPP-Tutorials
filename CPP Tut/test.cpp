#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    /*  1.Ask for the equation ex. 3 - 2
        2.Create a vector to store the strings individually (seperated by spaces) 
        3. Index 0,2 convert into integers
        3. if statements for index 1 (-,/,+/*)
        4. Print out the asnwer in doubles
        5.empty string vector and ask if they wanna go again.
    */ 
   string sEquation;
   cout << "Enter Calculation (EX. 3 + 2): ";
   getline(cin,sEquation);

   vector<string> vecStrings;
   stringstream ss(sEquation);
   string word;

   while(ss >> word){
    vecStrings.push_back(word);
   }

   float result;
   double num1 = stod(vecStrings[0]);
   double num2 = stod(vecStrings[2]);

   if(vecStrings[1] == "+"){
    result = num1 + num2;
    printf("%.1f + %.1f = %.1f",num1,num2,result);

   }else if(vecStrings[1] == "-"){
    result = num1 - num2;
    printf("%.1f - %.1f = %.1f",num1,num2,result);

   }else if(vecStrings[1] == "*"){
    result = num1 * num2;
    printf("%.1f * %.1f = %.1f",num1,num2,result);

   }else if(vecStrings[1] == "/"){
    result = num1 / num2;
    printf("%.1f / %.1f = %.1f",num1,num2,result);

   }else{
    cout << "Please Enter the following operation: +,-,*,/";
   }

   





    
    


    return 0;
}
