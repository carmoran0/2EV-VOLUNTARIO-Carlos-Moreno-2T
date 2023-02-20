#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "numero del 3 al 5: ";
    cin >> num;
    cout << endl;

    switch (num) {
        case 1:
            cout << "1(h)";
            break;
        case 2:
            cout << "2(AAA)";
            break;
        case 3:
            cout << " _____ \n"
                    "|___ / \n"
                    "  |_ \\ \n"
                    " ___) |\n"
                    "|____/ \n";
            break;
        case 4:
            cout << " _  _   \n"
                    "| || |  \n"
                    "| || |_ \n"
                    "|__   _|\n"
                    "   | |  \n"
                    "   |_|  \n";
            break;
        case 5:
            cout << " _____ \n"
                    "| ____|\n"
                    "| |__  \n"
                    "|___ \\ \n"
                    " ___) |\n"
                    "|____/ \n";
            break;
        default:
            cout << "Invalid number. Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
