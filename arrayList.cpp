#include "screens.h"

using namespace std;

int arrayList(vector<string> v)
{
    int choice;

    cout << endl;

    for (unsigned int i = 1; i <= v.size(); i++)
    {
        cout << "\t" << i << ". " << v[i-1] << endl;
    }

    cout << endl << "Enter a number from 1 to " << v.size() << ": ";
    cin >> choice;

    return choice;
}
