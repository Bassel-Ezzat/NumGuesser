#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool Pagain();
int main() {
    bool playagain = true;
    while (playagain) {
        cout << "Choose difficulty :\n" 
        << "1:Easy (From 1 to 10 in 3 guesses maximum)\n" 
        << "2:Medium (From 1 to 100 in 7 guesses maximum)\n"
        << "3:Hard (From 1 to 1000 in 15 guesses maximum)\n";
        srand(time(NULL));
        int r1 = rand() % 10 + 1;
        int r2 = rand() % 100 + 1;
        int r3 = rand() % 1000 + 1;
        int gcount = 0, x, diff;
        bool z = true;
        char YorN;
        cin >> diff;
        while(true) {
            if (diff == 1) {
                if (z){
                cout << "Enter a number Between 1 and 10!" << endl;
                z = false;
                }
                cin >> x;
                gcount++;
                if (x == r1) {
                    cout << "You win!" << endl;
                    cout << "You guessed the number in " << gcount << " attempts!" << endl;
                    playagain = Pagain();
                    break;
                }
                if (gcount >= 3) {
                    cout << "You lose!" << endl << "The correct number was : " << r1 << " ." << endl;
                    playagain = Pagain();
                    break;
                }
                else if (x > r1) {
                    cout << "Lower!" << endl;
                }
                else if (x < r1) {
                    cout << "Higher!" << endl;
                }
            }
            else if (diff == 2) {
                if (z){
                cout << "Enter a number Between 1 and 100!" << endl;
                z = false;
                }
                cin >> x;
                gcount++;
                if (x == r2) {
                    cout << "You win!" << endl;
                    cout << "You guessed the number in " << gcount << " attempts!" << endl;
                    playagain = Pagain();
                    break;
                }
                else if (x > r2) {
                    cout << "Lower!" << endl;
                }
                else if (x < r2) {
                    cout << "Higher!" << endl;
                }
                if (gcount >= 7) {
                    cout << "You lose!" << endl << "The correct number was : " << r2 << " ."  << endl;
                    playagain = Pagain();
                    break;
                }
            }
            else if (diff == 3) {
                if (z){
                cout << "Enter a number Between 1 and 1000!" << endl;
                z = false;
                }
                cin >> x;
                gcount++;
                if (x == r3) {
                    cout << "You win!" << endl;
                    cout << "You guessed the number in " << gcount << " attempts!" << endl;
                    playagain = Pagain();
                }
                else if (x > r3) {
                    cout << "Lower!" << endl;
                }
                else if (x < r3) {
                    cout << "Higher!" << endl;
                }
                if (gcount >= 15) {
                    cout << "You lose!" << endl <<"The correct number was : " << r3 << " ."  << endl;
                    playagain = Pagain();
                    break;
                }
            }
            else {
                cout << "Enter a number Between 1 and 3 to play!" << endl;
                cin >> diff;
            }
            
        }
    }
    return 0;
}



bool Pagain() {
    char YorN;
    cout << "Want to play again? Y/N\n";
    cin >> YorN;

    while (YorN != 'N' && YorN != 'n' && YorN != 'Y' && YorN != 'y') {
        cout << "Enter Y or N to proceed" << endl;
        cin >> YorN;
    }

    if (YorN == 'N' || YorN == 'n') {
        return false; 
    }
    return true; 
}