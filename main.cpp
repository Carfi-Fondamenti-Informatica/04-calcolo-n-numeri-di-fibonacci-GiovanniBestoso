#include <iostream>
using namespace std;

int main() {
    int n=0, primo=1, secondo=1, terzo=0;
    cin>>n;
    if (n>=2){
        cout<<primo<<endl<<secondo<<endl;
        for (int i = 0; i < (n-2); ++i) {
            terzo=primo+secondo;
            cout<<terzo<<endl;
            primo=secondo;
            secondo=terzo;
        }
    }else{
        cout<<"errore"<<endl;
    }
   return 0;
}
