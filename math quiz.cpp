// math quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isInteger(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string in;
    string answerS;
    int answer, correct;
    cout << "MATH QUIZ" << endl;
    cout << "Press Y to start" << endl;
    cin >> in;
    while (in == "Y") {
        srand(time(NULL));
        int a = rand() % 999 + 1, b = rand() % 999 + 1;
        correct = a + b;


        cout << a << " + " << b << " = ";
        cin >> answerS;

        while (!isInteger(answerS)) {
            cout << "Please make sure your answer only contains numbers: ";
            cin >> answerS;
        }

        answer = stoi(answerS);
        
        if (answer == correct) {
            cout << "Correct! The correct answer is " << correct << "." << endl;
        }
        else {
            cout << "Incorrect. The correct answer is " << correct << "." << endl;
        }
        cout << "Continue? (Y/N)" << endl;
        cin >> in;
    }
    cout << "See you next time!" << endl;
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
