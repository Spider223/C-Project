#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question {
    private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;
        
        int Correct_Answer;
        int Question_Score;

    public:
        void setValues(string, string, string, string, string, int, int);
        void askQuestion();

};

void Question :: setValues(string q, string a1, string a2,
                             string a3, string a4,
                              int ca, int qa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = qa;

}

void Question :: askQuestion()
{
     cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
 
   
    cout << "What is your answer?(in number)"
         << endl;
    cin >> Guess;
 
  
    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct !" << endl;
 
        Total = Total + Question_Score;
        cout << "Score = " << Question_Score
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << endl;
    }
 
    else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = 0"
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << "Correct answer = "
             << Correct_Answer
             << "." << endl;
        cout << endl;
    }


}

int main()
{
    cout<< "\n\n\t\t\t\t Welcome to Quiz Game"<<endl;
    cout<< "\n\n\t\t\t\t Developed by Madhan Pokharel"<<endl;
    cout<< "please press enter to continue"<<endl;

    cin.get();

    string Name;
    string Respond;

    cout<< "what is your name?"<<endl;
    cin >> Name;

    cout<<"Are you ready to take the quiz "<<Name<<"? yes/no"<<endl;
    cin >> Respond;
    
    if (Respond == "yes") {
        cout << endl;
        cout << "Good Luck !"<< endl;
    }

    else {
        cout<< "Okay good bye ! " << endl;
        return 0;
    }

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;

    q1.setValues("what is your name?", "hello", "hi", "bye", "goodbye",
                   3,10 );
    q1.askQuestion();
    cout<<"Total Score ="<< Total << endl;

    return 0;

}



