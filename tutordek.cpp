#include <iostream>
#include <stack>
using namespace std;

int main();
string nama;
stack<int> tumpuk;
int total=0, pilih, n;

int pilihan(int pilihan){
    if(pilihan==1){
        cout<<"Masukkan nama benda : ";
        cin.ignore(512,'\n');
        getline(cin,nama);
        cout<<"Masukkan Jumlah "<<nama<<" : ";
        cin>>n;
        tumpuk.push(n);
    }else if(pilihan==2){
        if(tumpuk.empty()){
            cout<<"Tumpukan Kosong\n";
        }else{
        cout<<"Jumlah Tumpukan "<<nama<<" : ";
        for(int i=0;i<=tumpuk.size();i++){
            total+=tumpuk.top();
            tumpuk.pop();
         }cout<<total;
        }
    }
    else if(pilihan==3){
        return 0;
    }
    else{
       cout<<"Pilihan anda tidak valid\n";
    }
    return main();
}
void menu(){
    string menu[4]={"\nPROGRAM TUMPUKAN C++",
                    "\n1. Tambah Tumpukan\n",
                    "2. Jumlah Tumpukan\n",
                    "3. Keluar\n"};
    for(int i=0;i<4;i++){
        cout<<menu[i];
    }
}

int main(){
    menu();
    cout<<"Pilihan : ";
    cin>>pilih;
    pilihan(pilih);
}
