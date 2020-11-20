#include <iostream>
#include <string>
#include "base.h"
#include "capitulo1.h"
#include "capitulo2.h"
#include "capitulo3.h"
#include "capitulo4.h"
#include "capitulo5.h"
#include "capitulo6.h"
#include "real.h"
using namespace std;

int main() {

cout << "* * * * * ** * * ** * * * * " << endl;
cout << "*Pratctice Test ISQTB CTFL*" << endl;
cout << "* * * * * * * * * * * * * *" << endl;

cout << "Press Enter to start the quiz .. " << endl;
cin.get();

int opt;

cout << "Selecione uma opcao e pressione enter" << endl;
cout <<"1 = 25 Questions - chapter 1"<< endl;
cout <<"2 = 25 Questions - chapter 2"<< endl;
cout <<"3 = 25 Questions - chapter 3"<< endl;
cout <<"4 = 25 Questions - chapter 4"<< endl;
cout <<"5 = 25 Questions - chapter 5"<< endl;
cout <<"6 = 25 Questions - chapter 6 "<< endl;
cout <<"7 = 40 Questions - All Chapters "<< endl;

cin >> opt;

switch(opt){
 case 1:{
   cap1 *cp = new cap1();
   cout << "Your Total Score is " << Total << "out of 100" << endl;
} break;

case 2: {
   cap2 *cp2 = new cap2();
   cout << "Your Total Score is " << Total << "out of 100" << endl;
 }break;

case 3:{
   cap3 *cp3 = new cap3();
   cout << "Your Total Score is " << Total << "out of 100" << endl;
 }break;



 case 4:{
   cap4 *cp4 = new cap4();
   cout << "Your Total Score is " << Total << "out of 100" << endl;
  } break;

case 5: {
   cap5 *cp5 = new cap5();
   cout << "Your Total Score is " << Total << "out of 100" << endl;
  } break;

case 6: {
   cap6 *cp6 = new cap6();
   cout << "Your Total Score is " << Total << "out of 100" << endl;
}break;


case 7:{
   cap7 *cp7 = new cap7();
   cout << "Your Total Score is " << Total << "out of 100" << endl;
  }break;

default:
   cout << "Opcao invalida";
   return 0;
   }

if (Total >= 70)
{
	cout << "Great you passed the quiz!" << endl;
	cout << "&&&&&&&&&&&&" << endl;
	cout << "& Congrats &" << endl;
	cout << "&&&&&&&&&&&&" << endl;
}

else {

cout << "Oh no! you failed the quiz." << endl;
cout << "better luck next time" << endl;
}
return 0;
}







