
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
    {
        cin >> word;
        idiot++;
    }
    cout << "you have: " << idiot << "choices" << endl;
    cout << "you insert the word done to end the program";


    return 0;

}