#include <iostream>
#include <string>
using namespace std;

// Dovurshvash za star na case 1

int main() {

    char again = 'y';
    do {
        char color[100];
        int colorCode = 0;
        string answer1, answer2;
        bool led;
        bool star;
        char blue_color[] = "Blue\n";
        char red_color[] = "Red\n";
        char white_color[] = "White\n";
        char blue_red_color[] = "Blue and Red\n";
        char red_white_color[] = "Red and White\n";
        char blue_white_color[] = "Blue and White\n";

        cout << "Enter the colors of the wire: ";
        fgets(color, 100, stdin);
        cout << "Does the wire has LED y/n: ";
        cin >> answer1;
        cout << "Does the wire has a star sign y/n:";
        cin >> answer2;




        int blue = strcmp(color, blue_color);
        int bluew = strcmp(color, blue_white_color);
        int red = strcmp(color, red_color);
        int redw = strcmp(color, red_white_color);
        int white = strcmp(color, white_color);
        int bluered = strcmp(color, blue_red_color);

        if (blue == 0 || bluew == 0) {
            colorCode = 1;
        }
        else if (red == 0 || redw == 0) {
            colorCode = 2;
        }
        else if (bluered == 0) {
            colorCode = 3;
        }
        else if (white == 0) {
            colorCode = 4;
        }


        if (answer1 == "y")
        {
            led = true;
        }
        else
        {
            led = false;
        }
        if (answer2 == "y")
        {
            star = true;
        }
        else
        {
            star = false;
        }

        switch (colorCode) {
        case 1:
            if (star && led) {
                string p;
                cout << "Is there a parallel port? y/n: ";
                cin >> p;
                if (p == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            else if (led) {
                string p;
                cout << "Is there a parallel port? y/n: ";
                cin >> p;
                if (p == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            else if (star) {
                cout << "Don't Cut" << endl;
                cout << "\n";
            }
            else {
                string e;
                cout << "Is the last digit of the serial number even? y/n: ";
                cin >> e;
                if (e == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            break;
        case 2:
            if (star && led) {
                string b;
                cout << "Are there 2 or more batteries on the bomb? y/n: ";
                cin >> b;
                if (b == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            else if (star) {
                cout << "Cut" << endl;
                cout << "\n";
            }
            else if (led) {
                string b;
                cout << "Are there 2 or more batteries on the bomb? y/n: ";
                cin >> b;
                if (b == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            else {
                string e;
                cout << "Is the last digit of the serial number even? y/n: ";
                cin >> e;
                if (e == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            break;
        case 3:
            if (star && led) {
                cout << "Don't Cut" << endl;
                cout << "\n";
            }
            else if (star) {
                string p;
                cout << "Is there a parallel port? y/n: ";
                cin >> p;
                if (p == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            else if (led) {
                string e;
                cout << "Is the last digit of the serial number even? y/n: ";
                cin >> e;
                if (e == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            else {
                string e;
                cout << "Is the last digit of the serial number even? y/n: ";
                cin >> e;
                if (e == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            break;
        case 4:
            if (star && led) {
                string b;
                cout << "Are there 2 or more batteries on the bomb? y/n: ";
                cin >> b;
                if (b == "y") {
                    cout << "Cut" << endl;
                    cout << "\n";
                }
                else {
                    cout << "Don't Cut" << endl;
                    cout << "\n";
                }
            }
            else if (star) {
                cout << "Cut" << endl;
                cout << "\n";
            }
            else if (led) {
                cout << "Don't Cut" << endl;
                cout << "\n";
            }
            else {
                cout << "Cut" << endl;
                cout << "\n";
            }
            break;
        default:
            cout << "Bruh";
            break;
        }
    } while (again == 'y');


    return 0;
}