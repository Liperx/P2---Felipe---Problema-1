#include <iostream>
#include <string>
using namespace std;

int troca(int N,char Vetor[N], char c1, char c2)
{
  int Trocas=0;
  for (int i; i <= N; i++) {
    if (Vetor[i]==c1){
      Vetor[i]=c2;
      Trocas=Trocas+1;
    }
  }
  return Trocas;
}

int main()
{   
  string palavra;
  char c1,c2;

  cout<< "digite a palavra"<<endl;
  cin>>palavra;
  cout<< "digite o caracter a ser trocado: "<<endl;
  cin>>c1;
  cout<< "digite o caracter da troca: "<<endl;
  cin>>c2;

  int N=palavra.size();
  char Vetor[N];
  for(int i=0;i<N;i++){Vetor[i]=palavra[i];
  }
  char *Ponteiro = Vetor;
  troca(N,Ponteiro, c1, c2);
  cout <<"\n\n";
  for(int i=0;i<N;i++){cout <<Vetor[i];}
  cout <<"\n";
  for(int i=0;i<N;i++){cout <<Ponteiro[i];}
  cout <<"\n";
  cout << troca(N,Ponteiro, c1, c2);

}