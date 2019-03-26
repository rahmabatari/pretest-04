/*
Program	: Pretest 04
Nama	: Rahma Batari
NPM		: 140810180051
Kelas 	: A
Tanggal	: 26 Maret 2019
*/

#include <iostream>

using namespace std;

struct ElemtList{
	char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First){
    First = NULL;
    }

void createElemt(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"NPM      : "; cin>>pBaru->npm;
    cout<<"Nama     : "; cin.ignore();
	cin.getline(pBaru->nama,40);
    cout<<"IPK      : "; cin>>pBaru->ipk;
    pBaru->next=NULL;
}
void traversal(List First){
    cout<<"\nNo\t"<<"\tNama\t\t"<<"NPM\t\t"<<"IPK\t"<<endl;
    pointer pBantu;
    pBantu=First;
    int i=1;
    while(pBantu != NULL){
        cout<<i<<"\t"<<pBantu->npm<<"\t\t\t"<<pBantu->nama<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
        i++;
    }
}

void insertLast(List& First, pointer pBaru){
    pointer Last;
    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}


int main()
{
    pointer p;
    List mhs;
    int pilih;

    createList(mhs);
    while(1){
        cout<<"Daftar"<<endl;
        cout<<"1. Tambah Data "<<endl;
        cout<<"2. Tampilkan"<<endl;
        cout<<"3. Keluar"<<endl;
        cout << "Pilih : "; cin >> pilih;
        
        switch(pilih){
        case 1:
            createElemt(p);
            insertLast(mhs, p);
        break;

        case 2:
            traversal(mhs);
        break;

        case 3:
            return 0;
            break;
        }
    }
}

