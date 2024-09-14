#include <iostream>
#include <iomanip>  
#include <string>   

using namespace std;

int main() {
    
    string choice;
    double score_ielts;
    int score_toefl, endscore;

    // Display the menu
    cout << "Welcome to English Proficiency score Converter!" << endl;
    cout << "Please choose an option:" << endl;
    cout << "1. Ielts to Toefl IBT" << endl;
    cout << "2. Toefl IBT to ielts" << endl;

    // Get the user's choice
    cout << "Enter your choice (1 or 2): ";
    getline(cin, choice);  //getline for getting choice entered by user

    // determining the choice and user inputs initial score of the english proficiency test
    if (choice == "1") { //if user chooses to convert ielts to TOEFL IBT
        cout << "Input your Ielts score" << endl;
        cin >> score_ielts;
        if (score_ielts == 9 ) {
            cout << "your TOEFL IBT score would be 118";
        }
        else if (score_ielts == 8.5) {
            cout << "your TOEFL IBT score would be 115";
        }
        else if (score_ielts == 8) {
            cout << "your TOEFL IBT score would be 110";
        }
        else if (score_ielts == 7.5) {
            cout << "your TOEFL IBT score would be 102";
        }
        else if (score_ielts == 7) {
            cout << "your TOEFL IBT score would be 94";
        }
        else if (score_ielts == 6.5) {
            cout << "your TOEFL IBT score would be 79";
        }
        else if (score_ielts == 6) {
            cout << "your TOEFL IBT score would be 60";
        }
        else if (score_ielts == 5.5) {
            cout << "your TOEFL IBT score would be 46";
        }
        else if (score_ielts == 4) {
            cout << "your TOEFL IBT score would be 35";
        }
        else if (score_ielts == 4.5) {
            cout << "your TOEFL IBT score would be 32";
        }
        else {
            cout << "your TOEFL IBT score would be less than 31";
        }
    } else if (choice == "2") { // if user chooses to convert toefl itp to Ielts
        cout << "Input your Toefl ITP score" << endl;
        cin >> score_toefl;
        if (score_toefl >= 118) {
            cout << "your Ielts score would be 9" << endl;
        }
        else if (score_toefl <=117 && score_toefl >=115) {
            cout << " your Ielts score would be 8.5" << endl;
        }
        else if (score_toefl <=114 && score_toefl >=110) {
            cout << " your Ielts score would be 8" << endl;
        }
        else if (score_toefl <=109 && score_toefl >=102) {
            cout << " your Ielts score would be 7.5" << endl;
        }
        else if (score_toefl <=101 && score_toefl >=94) {
            cout << " your Ielts score would be 7" << endl;
        }
        else if (score_toefl <=93 && score_toefl >=79) {
            cout << " your Ielts score would be 6.5" << endl;
        }
        else if (score_toefl <=78 && score_toefl >=60) {
            cout << " your Ielts score would be 6" << endl;
        }
        else if (score_toefl <=59 && score_toefl >=46) {
            cout << " your Ielts score would be 5.5" << endl;
        }
        else if (score_toefl <=45 && score_toefl >=35) {
            cout << " your Ielts score would be 5" << endl;
        }
        else if (score_toefl <=34 && score_toefl >=32) {
            cout << " your Ielts score would be 4.5" << endl;
        }
        else {
            cout << " your Ielts score would be less than 4" << endl;
        }
        
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
        return 1;  // Exit with an error code
    }

    return 0; //exit with no errors
}