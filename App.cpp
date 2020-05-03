#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {

do {

system("color 0a");
float pi = 3.141592653;
string choice;
cout <<"Please choose what you would like to calculate..."<<endl;
Sleep(200);
cout<<"(A) To calculate the area of circle, (C) For the circumference of a circle, (V) For the Volume of a Sphere, (S) For the surface area of a sphere, (P) For the pythagorean theorem, (Soh) For calculating the sin of a number, (Cah) For calculating the cosine of a number, (Toa) For calculating the tangent of a number, (E) For the area of an equilateral triangle." <<endl;
cin>>choice;
if(choice == "A"){
float choice2;
cout<<"Please type in the radius: "<<endl;
cin>>choice2;
float all = choice2*choice2;
float all2 = pi*all;
cout<<"The Area of the circle is: " << all2 <<endl;
}
if(choice == "C"){
float choice3;
cout<<"Please type in the radius: "<<endl;
cin>>choice3;
float all3 = choice3*2;
float all4 = pi*all3;
cout<<"The circumference of the circle is: " << all4 <<endl;
}
if(choice == "V"){
float choice4;
cout<<"Please type in the radius: "<<endl;
cin>>choice4;
float all5 = choice4*choice4*choice4;
float all6 = pi*all5;
float all7 = 1.33333333333;
string choice5;
cout<<"The default value for 4/3 is set to 1.33333333333 would you like to keep it this way? (Y/N)"<<endl;
cin>>choice5;
if(choice5 == "Y")
{
float all8 = all7*all6;
cout<<"The volume of the sphere is: " << all8 <<endl;
}
if(choice5 == "N")
{
    float choice6;
    cout<<"Type in the value for 4/3 you would like to use: " <<endl;
    cin>>choice6;
    float all9 = choice6*all6;
    cout<<"The volume of the sphere is: " << all9 <<endl;
}
}
if(choice == "S"){
float choice7;
cout<<"Please type in the radius: "<<endl;
cin>>choice7;
float all10 = choice7*choice7;
float all11 = pi*all10;
float all12 = 4*all11;
cout<<"The Surface Area of the Sphere is: " << all12 <<endl;
}
if(choice == "P"){
string choice8;
cout<<"Please choose what you would like to calculate, C,A,B"<<endl;
cin>>choice8;
if(choice8 == "C"){
float choice9;
cout<<"Type in the value for b: " <<endl;
cin>>choice9;
float all13 = choice9*choice9;
float choice10;
cout<<"Type in the value for a: " <<endl;
cin>>choice10;
float all14 = choice10*choice10;
float all15 = all13 + all14;
float all16 = sqrt(all15);
cout<<"The value of c is: " << all16 <<endl;
}
if(choice8 == "A"){
float choice11;
cout<<"Type in the value for c: " <<endl;
cin>>choice11;
float all17 = choice11*choice11;
float choice12;
cout<<"Type in the value for b: " <<endl;
cin>>choice12;
float all18 = choice12*choice12;
float all19 = all17 + all18;
float all20 = sqrt(all19);
cout<<"The value of c is: " << all20 <<endl;
}
if(choice8 == "B"){
float choice13;
cout<<"Type in the value for a: " <<endl;
cin>>choice13;
float all21 = choice13*choice13;
float choice14;
cout<<"Type in the value for c: " <<endl;
cin>>choice14;
float all22 = choice14*choice14;
float all23 = all21 + all22;
float all24 = sqrt(all23);
cout<<"The value of c is: " << all24 <<endl;
}
}
if(choice == "Soh"){
string one;
cout<<"Do you want to the calculate a hyperbolic sine? (Y/N)" <<endl;
cin>>one;
if(one =="Y"){
float two;
cout<<"Please type in the number: " <<endl;
cin>>two;
float three = sinh(two);
cout<<"The hyperbolic sine of the number " << two << " is: " << three <<endl;
}
if(one == "N"){
float choice15;
cout<<"Please type in the number: "<<endl;
cin>>choice15;
float all25 = sin(choice15);
cout<<"The sin of the number " << choice15 << " is: " << all25 <<endl;
}
}
if(choice == "Cah"){
string four;
cout<<"Do you want to the calculate a hyperbolic cosine? (Y/N)" <<endl;
cin>>four;
if(four == "Y"){
float five;
cout<<"Please type in the number: "<<endl;
cin>>five;
float six = acosh(five);
cout<<"The hyperbolic cosine of the number " << five << " is: " << six <<endl;
}
if(four == "N"){
float choice16;
cout<<"Please type in the number: "<<endl;
cin>>choice16;
float all26 = cos(choice16);
cout<<"The cosine of the number " << choice16 << " is: " << all26 <<endl;
}
}
if(choice == "Toa"){
string seven;
cout<<"Do you want to the calculate an arc hyperbolic tangent? (Y/N)" <<endl;
cin>>seven;
if(seven == "Y"){
float eight;
cout<<"Please type in the number: " <<endl;
cin>>eight;
float nine = atanh(eight);
cout<<"The arc hyperbolic tangent of the number " << eight << " is: " << nine <<endl;
}
if(seven == "N"){
float choice17;
cout<<"Please type in the number: "<<endl;
cin>>choice17;
float all27 = tan(choice17);
cout<<"The tangent of the number " << choice17 << " is: " << all27 <<endl;
}
}
if(choice == "E"){
float choice18;
cout<<"Please type in the side length: "<<endl;
cin>>choice18;
float all28 = choice18*choice18;
float all29 = sqrt(0.75);
float all30 = all29*all28;
cout<<"The area of the equilateral triangle is: " << all30 <<endl;

}
if(choice == ""){
cout<<""<<endl;
}
if(choice == ""){
cout<<""<<endl;
}
if(choice == ""){
cout<<""<<endl;
}
if(choice == ""){
cout<<""<<endl;
}

}
while(true);














}
