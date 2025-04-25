#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    bool playagain = true;
    while (playagain) {
        cout << "Choose difficulty :\n" << "1:Easy (From 1 to 10 in 3 guesses maximum)\n" << "2:Medium (From 1 to 100 in 7 guesses maximum)\n"
        << "3:Hard (From 1 to 1000 in 15 guesses maximum)\n";
        srand(time(NULL));
        int r1 = rand() % 11;
        int r2 = rand() % 101;
        int r3 = rand() % 1001;
        int gcount = 0;
        int x;
        int diff;
        char YorN;
        cin >> diff;
        while(true) {
            if (diff==1) {
                cout << "Enter a number Between 0 and 10!" << endl;
                cin >> x;
                gcount++;
                if (x==r1) {
                    cout << "You win!" << endl;
                    cout << "You guessed the number in " << gcount << " attempts!" << endl;
                    cout << "Want to play again? Y=yes N=no\n";
                    cin >> YorN;
                    while (YorN!='N' && YorN!='Y') {
                        cout << "Enter Y or N to proceed" << endl;
                        cin >> YorN;
                    }
                    if (YorN=='N') {
                        playagain = false;
                    }
                    break;
                }
                else if (x>r1) {
                    cout << "Lower" << endl;
                }
                else if (x<r1) {
                    cout << "Higher" << endl;
                }
                if (gcount>=3) {
                    cout << "You lose! The correct number was : " << r1 << endl;
                    cout << "Want to play again? Y=yes N=no\n";
                    cin >> YorN;
                    while (YorN!='N' && YorN!='Y') {
                        cout << "Enter Y or N to proceed" << endl;
                        cin >> YorN;
                    }
                    if (YorN=='N') {
                    playagain = false;
                    }
                    break;
                }
            }
            else if (diff==2) {
                cout << "Enter a number Between 0 and 100!" << endl;
                cin >> x;
                gcount++;
                if (x==r2) {
                    cout << "You win!" << endl;
                    cout << "You guessed the number in " << gcount << " attempts!" << endl;
                    cout << "Want to play again? Y=yes N=no\n";
                    cin >> YorN;
                    while (YorN!='N' && YorN!='Y') {
                        cout << "Enter Y or N to proceed" << endl;
                        cin >> YorN;
                    }
                    if (YorN=='N') {
                        playagain = false;
                    }
                    break;
                }
                else if (x>r2) {
                    cout << "Lower" << endl;
                }
                else if (x<r2) {
                    cout << "Higher" << endl;
                }
                if (gcount>=7) {
                    cout << "You lose! The correct number was : " << r2 << endl;
                    cout << "Want to play again? Y=yes N=no\n";
                    cin >> YorN;
                    while (YorN!='N' && YorN!='Y') {
                        cout << "Enter Y or N to proceed" << endl;
                        cin >> YorN;
                    }
                    if (YorN=='N') {
                        playagain = false;
                    }
                    break;
                }
            }
            else if (diff==3) {
                cout << "Enter a number Between 0 and 1000!" << endl;
                cin >> x;
                gcount++;
                if (x==r3) {
                    cout << "You win!" << endl;
                    cout << "You guessed the number in " << gcount << " attempts!" << endl;
                    cout << "Want to play again? Y=yes N=no\n";
                    cin >> YorN;
                    while (YorN!='N' && YorN!='Y') {
                        cout << "Enter Y or N to proceed" << endl;
                        cin >> YorN;
                    }
                    if (YorN=='N') {
                        playagain = false;
                    }
                    break;
                }
                else if (x>r3) {
                    cout << "Lower" << endl;
                }
                else if (x<r3) {
                    cout << "Higher" << endl;
                }
            }
            else {
                cout << "Enter a number Between 1 and 3 to play!" << endl;
                cin >> diff;
            }
            if (gcount>=15) {
                cout << "You lose! The correct number was : " << r3 << endl;
                cout << "Want to play again? Y=yes N=no\n";
                cin >> YorN;
                while (YorN!='N' && YorN!='Y') {
                    cout << "Enter Y or N to proceed" << endl;
                    cin >> YorN;
                }
                if (YorN=='N') {
                    playagain = false;
                }
                break;
            }
        }
    }
    return 0;
}