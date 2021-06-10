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


#include <iostream>
#include <cstring>     // prototype for strcmp()
const int STR_LIM = 50;
int main()
{
    using namespace std;
    char word[STR_LIM];
    int count = 0;

    cout << "Enter words (to stop, type the word done):\n";

    while (cin >> word && strcmp("done", word))
        ++count;

    cout << "You entered a total of " << count << " words.\n";
    return 0;
}

#include <iostream> 
#include <string>

int main()
{

    using namespace std;
    int idiot = 0;
    string word;
    cout << "Enter words (to stop, type the word done):\n";

    cin >> word;

    while (word != "done")

        cin >> word;
    idiot++;

    cout << "you have: " << idiot << "choices" << endl;
    cout << "you insert the word done to end the program";








    return 0;

