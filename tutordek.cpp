#include <iostream>
#include <stack>
using namespace std;

int main();
string nama;
stack<int> piring;
int total=0, pilih, n;

int pilihan(int pilihan){
    if(pilihan==1){
        cout<<"Masukkan Jumlah Piring : ";
        cin>>n;
        piring.push(n);
    }else if(pilihan==2){
        if(piring.empty()){
            cout<<"Tumpukan Kosong\n";
        }else{
        cout<<"Jumlah Tumpukan Piring : ";
        for(int i=0;i<=piring.size();i++){
            total+=piring.top();
            piring.pop();
         }cout<<total;
        }
    }
    else{
        return 0;
    }
    return main();
}

int main(){
    cout<<"PROGRAM TUMPUKAN C++"<<endl;
    cout<<"\n1. Tambah Tumpukan\n2. Jumlah Tumpukan\n3. Keluar\nPilihan : ";
    cin>>pilih;
    pilihan(pilih);
}
