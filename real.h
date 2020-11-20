#ifndef REAL_H_INCLUDED
#define REAL_H_INCLUDED
#include "base.h"

class cap7:public Question{
std::string Question_Text;
		std::string Answer_1;
		std::string Answer_2;
		std::string Answer_3;
		std::string Answer_4;
public:
    cap7();

};

cap7::cap7(){


Question q1;
Question q2;
Question q3;
Question q4;
Question q5;
Question q6;
Question q7;
Question q8;
Question q9;
Question q10;


q1.setValues ("Question here all  ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q2.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q3.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q4.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q5.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q6.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q7.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q8.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q9.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q10.setValues ("Question here ....",
		"possible answer 1",
		"possible answer 2",
		"possible answer 3",
		"possible answer 4",
		3, // The position of the correct answe
		10); // The answer value in points

q1.askQuestion();

q2.askQuestion();

q3.askQuestion();

q4.askQuestion();

q5.askQuestion();

q6.askQuestion();

q7.askQuestion();

q8.askQuestion();

q9.askQuestion();

q10.askQuestion();




}





#endif // REAL_H_INCLUDED
