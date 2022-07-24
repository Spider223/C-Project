#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total=0;

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
 
        Total++ ;
        cout << "Score = " << Total << "!" << endl;
        cout << endl;
    }
 
    else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = " <<Total << endl;
           
        cout << "Correct answer = "
             << Correct_Answer
             << "." << endl;
        cout << endl;
    }


}

int main()
{
    cout<<"\n\n\t\t\t\t==================================="<<endl;
    cout<< "\n\n\t\t\t\t Welcome to Quiz Game"<<endl;
    cout<< "\n\n\t\t\t\t Developed by Madhan Pokharel"<<endl;
    cout<<"\n\n\t\t\t\t==================================="<<endl;

    cout<< "\nPlease! Press Enter to Continue"<<endl;

    cin.get();

    string Name;
    string Respond;

    cout<< "Enter Your Name:"<<endl;
    cin >> Name;

    cout<<"\nAre you ready to take the quiz "<<Name<<"? yes/no"<<endl;
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
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    q1.setValues("Which country has the highest life expectancy ?", "Canada", "Honk kong", "China","UK",2,10 );
    q1.askQuestion();

    q2.setValues("What is the capital city of Finland?", "Oslo", "Warsaw", "Wellington", "Helsinki", 4, 10);
    q2.askQuestion();

    q3.setValues("Which of the following is not an international organisation?", "FIFA", "NATO", "ASEAN", "FBI", 4,10);
    q3.askQuestion();

    q4.setValues("Which of the following actors was the first one to play James Bond?", "Timothy Dalton", "Roger Moore", "Sean Connery", "George Lazenby", 3, 10);
    q4.askQuestion();

    q5.setValues("The two biggest exportes of beers in Europe are Germany and ...", "Spain", "France", "Italy", "Belgium",4,10);
    q5.askQuestion();
    
    q6.setValues("The great Victoria Desert is located in ?", "Canada", "West Africa", "Australia", "North America",3,10);
    q6.askQuestion();

    q7.setValues("Which of the following is used in pencils ?", "Graphite", "Silicon", "Charcoal", "Phosphorous",1,10);
    q7.askQuestion();

    q8.setValues("What Galileo invented?", "Barometer", "Pendulum clock", "Microscope", "Thermometer",4,10);
    q8.askQuestion();

    q9.setValues("Which one is the smallest ocean in the world?", "Indian", "Pacific", "Atlantic", "Artic",4,10);
    q9.askQuestion();

    q10.setValues("In which country, white elephant is found?", "India", "Sri Lanka", "Thailand", "Malaysia",3,10);
    q10.askQuestion() ;




    cout<<"Total Score = "<< Total << endl;

    return 0;

}



