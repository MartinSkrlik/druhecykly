#include <iostream>

struct car { char name[20]; int year; };

int main()
{
    using namespace std;
    int n;
    cout << "How many cars do you wish to catalog?: ";

    cin >> n;

    while (cin.get() != '\n')    // get rid of rest of line
        ;

    car* pc = new car[n];

    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Car #" << (i + 1) << ":\n";
        cout << "Please enter the make: ";
        cin.getline(pc[i].name, 20);
        cout << "Please enter the year made: ";
        cin >> pc[i].year;
        while (cin.get() != '\n')    // get rid of rest of line
            ;
    }
    cout << "Here is your collection:\n";
    for (i = 0; i < n; i++)
        cout << pc[i].year << " " << pc[i].name << "\n";

    delete[] pc;
    return 0;
}
