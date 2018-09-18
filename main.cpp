#include <QCoreApplication>
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    start:
    int numOfrows = 0;
    string stars = "*";
    string spaces = "";
    string starsToAdd = "**";

    input:
    cout << "\n Enter number of rows" << endl;

    while (!(cin >> numOfrows))
    {
        cin.clear();
        while (cin.get() == '\n' || cin.get() == '0');
        cout << "\n No letters and characters allowed. Try again.";
        goto input;

    }

    for (int i = 0; i < numOfrows; i++) spaces = spaces + " ";


    for (int i = 0; i < numOfrows; i++) {

        cout << spaces;

        cout << stars << endl;
        stars = stars + starsToAdd;

        spaces = spaces.substr(0, spaces.size()-1);

    }

    Sleep(2000);

    goto start;
}
