#include <iostream>
#include "struct.h"
using namespace std;

int main()
{
    cout << "ciao mondo, Forza Napoli" << endl;
    int numeri[]{10, 6, 4, 1, 9, 4};
    ordina(numeri, 6);
    for(int i=0; i<6; i++){
        cout<<numeri[i]<<endl;
    }
    return 0;
}
