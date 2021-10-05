#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <ctype.h>
#include <Windows.h>
using namespace std;

void version() {
    cout << "version:v2.5" << endl;
}

int main()
{
    int startscreenusedclock = 0;
    for (;;) {
        if (startscreenusedclock == 0) {
            for (int startscreenclock = 500;startscreenclock--;startscreenclock > 0) {
                cout << "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
                cout << "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
            }
            for (int startscreenlock2 = 500;startscreenlock2--;startscreenlock2 > 0) {
                cout << endl;
            }
            cout << "COS" << endl;
            cout << "made by Clod" << endl;
            version();
            startscreenusedclock++;
        }
        cout << "Please enter product key:";
        string product_key;
        cin >> product_key;
        if (product_key == "128446-837473-74756893-4785836-4834648" || product_key == "104857-039285-385938-438236-385846") {
            for (;;) {
                cout << "************************************************************************************************************************************************************************************";
                string maininput;
                cout << "main>";
                cin >> maininput;
                if (maininput == "help") {
                    cout << "************************************************************************************************************************************************************************************";
                    cout << "help:show help(help)" << endl;
                    cout << "power:shut down(power--shutdown)" << endl;
                    cout << "clock:clock(clock)" << endl;
                }
                else if (maininput == "power") {
                    cout << "************************************************************************************************************************************************************************************";
                    string powerinput;
                    cout << "power>";
                    cin >> powerinput;
                    if (powerinput == "restart") {
                        system("shutdown -r -t 0");
                    }
                    else if (powerinput == "shutdown") {
                        system("shutdown - s - t 0");
                    }
                }
                else if (maininput == "program") {
                    cout << "1.Data sorting" << endl;
                    cout << "program>";
                    int programinpurt;

                }
                else {
                    cout << "'";
                    cout << maininput;
                    cout << "'";
                    cout << "is not an internal command or a runable program." << endl;
                }
            }
        }
        else {
            cout << "Product key error!" << endl;
            cout << "************************************************************************************************************************************************************************************";
            continue;
        }
    }
}
