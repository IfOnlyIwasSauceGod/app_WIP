#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "project02.h"

using namespace std;

int main()
{
    char input;
    UserInfo inputInfo;

    cout << "Welcome to MyFace, a social media network where you can post your thoughts and see what your friends are up to." << endl << endl;

    do
    {
        LoginScreen();
        cin >> input;
        cout << endl;
        if (input == '1' && input != '2' && input != '3')
        {
            inputInfo.signUp();
        }
        else if (input == '2' && input != '3')
        {
            inputInfo.signIn();
        }
        else if(input == '3')
        {
            listUsers();
            cout << endl;
            system("PAUSE");
            cout << endl;
            LoginScreen();
        }
        else if (input != '1' && input != '2' && input != '3' && input != '4')
        {
            cout << "Invalid choice! Redirecting to login page..." << endl << endl;
        }
        else if (input == '4')
        {
            cout << "Thank you for using Cancer." << endl;
        }
    } while (input != '4');

    return ;
}
