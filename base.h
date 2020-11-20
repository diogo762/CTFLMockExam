#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED


int Guess;
int Total;

class Question
{
	public:
		std::string Question_Text;
		std::string Answer_1;
		std::string Answer_2;
		std::string Answer_3;
		std::string Answer_4;

		int Correct_Answer;
		int Question_Score;

	public:
		void setValues (std::string, std::string, std::string, std::string, std::string, int, int);
		void askQuestion ();
};

/*class cap1:public Question{
std::string Question_Text;
		std::string Answer_1;
		std::string Answer_2;
		std::string Answer_3;
		std::string Answer_4;
public:
    cap1();

};

cap1::cap1(){


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


q1.setValues ("Question here ....",
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




}*/

void Question::setValues (std::string q, std::string a1, std::string a2, std::string a3, std::string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

void Question::askQuestion()
{
	std::cout << std::endl;
	std::cout << Question_Text << std::endl;
	std::cout << "1. " << Answer_1 <<std:: endl;
	std::cout << "2. " << Answer_2 << std::endl;
	std::cout << "3. " << Answer_3 << std::endl;
	std::cout << "4. " << Answer_4 << std::endl;
	std::cout << std::endl;
	std::cout << "What is your answer?(using corresponding numnber)" << std::endl;
	std::cin >> Guess;
	if (Guess == Correct_Answer)
	{
		std::cout << std::endl;
		std::cout << "Great! You are correct" << std::endl;
		Total = Total + Question_Score;
		std::cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "oh no! You are wrong." << std::endl;
		std::cout << "Score: 0" << " out of " << Question_Score << "!" << std::endl;
		std::cout << "The correct answer is " << Correct_Answer << "." << std::endl;
		std::cout << std::endl;
	}
}



#endif // BASE_H_INCLUDED
