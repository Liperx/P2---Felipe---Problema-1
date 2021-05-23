#include <iostream>
using namespace std;

string troca(string palavra, char c1, char c2)
{
    int l = palavra.length();

    for (int i = 0; i < l; i++) {

        if (palavra[i] == c1)
            palavra[i] = c2;
            
    }
  
}

int main()
{   
  string palavra;
   char c1, char c2;

  cout<< "digite a palavra"<<endl;
  cin>>palavra;
  cout<< "digite o caracter a ser trocado: "<<endl;
  cin>>c1;
  cout<< "digite o caracter da troca: "<<endl;
  cin>>c2;
  cout << troca(palavra, c1, c2);
  
}
  