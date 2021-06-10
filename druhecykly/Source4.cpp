// cyklus for, vnorene polia, 

#include <iostream>
int main()
{
    using namespace std;

    int tretirok = 0;
    int druhyrok = 0;
    double prvyrok = 0.0;
    int vysledok = 0;

    const int months = 12;
    const char* mesiace[months] = { "januar", "februar", "marec", "april", "maj", "jun", "jul", "august", "sebtember", "oktober", "november", "december" };
    int pocty[3][months];
    int i;
    for (int i = 0; i != 12; i++)
    {
        cout << "zadaj predaje za prvy rok " << mesiace[i] << endl;
        cin >> pocty[0][i];
        for (int i = 0; i != 12; i++)
            prvyrok += pocty[0][i];
    }

    for (int i = 0; i != 12; i++)
    {
        cout << "zadaj predaje za druhy rok " << mesiace[i] << endl;
        cin >> pocty[1][i];
        for (int i = 0; i != 12; i++)
            druhyrok += pocty[1][i];
    }

    for (int i = 0; i != 12; i++)
    {
        cout << "zadaj predaje za treti rok " << mesiace[i] << endl;
        cin >> pocty[2][i];
        for (int i = 0; i != 12; i++)
            tretirok += pocty[2][i];
    }


    vysledok = prvyrok + druhyrok + tretirok;

    cout << "Mesacne predaje za roky: \n";
    cout << "Prvy rok: " << prvyrok << endl;
    cout << "Druhy rok: " << druhyrok << endl;
    cout << "Treti rok: " << tretirok << endl;
    cout << "Spolu za vsetky roky :" << vysledok;




    return 0;
}








