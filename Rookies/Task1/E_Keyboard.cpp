#include <iostream>
using namespace std ;
int main ()
{
    char sign ;
    string Keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./" , Statement , modStatement="" ;
    cin >> sign ;
    cin >> Statement ;
    for (int i = 0 ; i<Statement.size() ; i++)
    {
        for (int j = 0 ; j<Keyboard.size() ; j++)
        {
            if (Statement[i]==Keyboard[j])
            {
                if (sign == 'R')
                {
                    modStatement+=Keyboard[j-1] ;
                }else
                {
                    modStatement+=Keyboard[j+1] ;
                }
                break ;
            }
        }

    }
    cout << modStatement << endl ;
    return 0 ;
}