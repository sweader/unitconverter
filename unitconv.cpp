#include <string>
#include <iostream>
#include <ostream>
#include <istream>
#define INCH_CONVERSION_RATE 2.54 
#define FOOT_CONVERSION_RATE 30.48
#define POUND_CONVERSION_RATE 2.205
#define MILES_CONVERSION_RATE 1.60934
// FREEDOM UNITS TO ACTUALLY GOOD ONES
double inchToCm(double inch){
    double cm = inch * INCH_CONVERSION_RATE;   
    return cm;
}
double footToCm(double foot){
    double cm = foot * FOOT_CONVERSION_RATE;
    return cm;
}
double milesToKm(double miles){
    double km = miles * MILES_CONVERSION_RATE;
    return km;
}
double poundsToKg(double pounds){
    double kg = pounds/POUND_CONVERSION_RATE;
    return kg;
}
double FahrenhietToC(double fahrenheit){
    double C = (fahrenheit-32)*(5/9);
    return C;
}
int main(){
    std::string choice;
        std::cout<<"Which unit do you want to convert?\n1. Fahrenheit to C\n2. Pounds to Kg\n3. Miles to Km\n4. Foot to Cm\n5. Inch to Cm\n";
        std::cin>>choice;
    if(choice == "1"){
        std::cout<<"Enter your value:  ";
        double value;
        std::cin>>value;
        std::cout<<FahrenhietToC(value)<<std::endl;    
    }
    if(choice == "2"){
        std::cout<<"Enter your value:  ";
        double value;
        std::cin>>value;
        std::cout<<poundsToKg(value)<<std::endl;
    }
    if(choice == "3"){
        std::cout<<"Enter your value:  ";
        double value;
        std::cin>>value;
        std::cout<<milesToKm(value)<<std::endl;
    }
    if(choice == "4"){
        std::cout<<"Enter your value:  ";
        double value;
        std::cin>>value;
        std::cout<<footToCm(value)<<std::endl;
    }
    if(choice == "5"){        
        std::cout<<"Enter your value:  ";
        double value;
        std::cin>>value;
        std::cout<<inchToCm(value)<<std::endl;
    }
    return 0;
}