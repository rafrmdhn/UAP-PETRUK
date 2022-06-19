#include <iostream>
#include <stack>
using namespace std;

string nama;
stack<int> tumpuk;
int total=0, pilih, n;

int pilihan(int pilihan){
    if(pilihan==1){
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
         }cout<<total<<endl;
        }
    }
    else if(pilihan==3){
        return 0;
    }
    else{
       cout<<"Pilihan anda tidak valid\n";
    }
}
void menu(){
    string menu[4]={"PROGRAM TUMPUKAN C++",
                    "\n1. Tambah Tumpukan\n",
                    "2. Jumlah Tumpukan\n",
                    "3. Keluar\n"};
    for(int i=0;i<4;i++){
        cout<<menu[i];
    }
}

int main(){
	cout<<"Masukkan nama benda yang ingin ditumpuk : ";
    getline(cin,nama);
    menu();
    do{
    	cout<<"Pilihan : ";
    	cin>>pilih;
    	pilihan(pilih);
	}while(pilih!=3);
}
