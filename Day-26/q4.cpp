//wap to create quiz application
#include<iostream>
using namespace std;
void quizApplication(){
    int score=0;
    int answer;

    cout<<"========quiz application========\n"<<endl;

      // Question 1
    cout << "1. What is the capital of Haryana?\n";
    cout << "   1) Chandigarh\n   2) Delhi\n   3) Hisar\n   4) Faridabad\n";
    cout << "Enter your choice: ";
    cin >> answer;
    if (answer == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is Chandigarh.\n";
    }
      // Question 2
    cout << "\n2. What is the capital of India?\n";
    cout << "   1) Mumbai\n   2) Delhi\n   3) Kolkata\n   4) Chennai\n";
    cout << "Enter your choice: ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is Delhi.\n";
    }
    //Question 3
     cout << "\n3. What is 5 * 6?\n";
    cout << "   1) 11\n   2) 30\n   3) 56\n   4) 25\n";
    cout << "Enter your choice: ";
    cin >> answer;
    if (answer == 2) { score++; cout << "Correct!\n"; }
    else { cout << "Wrong! Correct answer: 30\n";
    }
      // Final Score
    cout << "\n===== Quiz Finished =====\n";
    cout << "Your total score is: " << score << " out of 3\n";
}
int main(){
 quizApplication();
 return 0;
}

