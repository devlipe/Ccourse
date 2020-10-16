#include <iostream>
 
using namespace std;
 
int main() 
{
    int inicio_h = 0, inicio_m = 0, termino_h = 0, termino_m = 0;
    int hora = 0, minuto = 0, total = 0;
    cin >> inicio_h >> inicio_m >> termino_h >> termino_m;
    
    inicio_h *= 60;
    termino_h *= 60;
    
    inicio_m += inicio_h;
    termino_m += termino_h;
    
    total = termino_m - inicio_m;
    
    if(total == 0)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)";
    }
    else if (total > 0)
    {
        hora = total /60;
        minuto = total%60;

        cout << "O JOGO DUROU " << hora << " HORA(S) E " << minuto << " MINUTO(S)";
    }
    else if (total < 0)
    {
        total = 1440 + total;
        hora = total /60;
        minuto = total%60;

        cout << "O JOGO DUROU " << hora << " HORA(S) E " << minuto << " MINUTO(S)";
    }
 
    return 0;
}