#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
using namespace std;

int getTime() {
    return clock() / CLOCKS_PER_SEC;
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
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "COS" << endl;
            cout << "made by Clod" << endl;
            cout << "Internal version:v1.2" << endl;
            cout << "initial password:123456" << endl;
            startscreenusedclock++;
        }
        cout << "Please enter the password:";
        string password;
        cin >> password;
        if (password == "123456" || password == "qwertyuiop") {
            for (;;) {
                cout << "************************************************************************************************************************************************************************************";
                string maininput;
                cout << "main>";
                cin >> maininput;
                if (maininput == "help") {
                    cout << "************************************************************************************************************************************************************************************";
                    cout << "help:show help(help)" << endl;
                    cout << "power:shut down(power--restart)" << endl;
                    cout << "clock:clock(clock)" << endl;
                }
                else if (maininput == "power") {
                    cout << "************************************************************************************************************************************************************************************";
                    string powerinput;
                    cout << "power>";
                    cin >> powerinput;
                    if (powerinput == "restart") {
                        startscreenusedclock--;
                        break;
                    }
                }
                else if (maininput == "clock") {
                    cout << "************************************************************************************************************************************************************************************";
                    int i = 0;
                    int lastTime = 0;
                    while (1) {
                        int now = getTime();
                        if (now - lastTime > 0) {
                            cout << ++i << endl;
                            lastTime = now;
                        }
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
            cout << "Password error!" << endl;
            cout << "************************************************************************************************************************************************************************************";
            continue;
        }
    }
}
