#include <iostream>
#include "linkedList.hpp"
using namespace std;

int main(){
    Node* head = NULL;
    Node* dua = NULL;
    Node* tiga = NULL;

    head = new Node;
    dua = new Node;
    tiga = new Node;

    head->data = 1;
    head->next = dua;

    dua->data = 2;
    dua->next = tiga;

    tiga->data = 3;
    tiga->next = NULL;

    int pilihan, posisi, dataInput, urutan, pertama, kedua;
    while (true) {
        cout << "List saat ini : ";
        printList(head);
        cout << endl;
        cout << "=====================================" << endl;
        cout << "| Silakan pilih menu di bawah       |" << endl;
        cout << "| 1. Menghitung panjang list        |" << endl;
        cout << "| 2. Menambahkan node baru          |" << endl;
        cout << "| 3. Mendapatkan data di dalam list |" << endl;
        cout << "| 4. Menghapus node yang sudah ada  |" << endl;
        cout << "| 5. Mencari data di dalam list     |" << endl;
        cout << "| 6. Menukar posisi antara dua node |" << endl;
        cout << "| 7. Membalikkan urutan list        |" << endl;
        cout << "| 8. Mengurutkan list               |" << endl;
        cout << "=====================================" << endl;
        cout << "Masukkan pilihan menu : ";
        cin >> pilihan;

        switch (pilihan){
        case 1: // Panjang list
            cout << "Panjang list : " << length(head) << endl;
            break;

        case 2: // Menambahkan node baru
            cout << "Data yang ingin ditambahkan : ";
            cin >> dataInput;
            cout << "Posisi penambahan" << endl;
            cout << "1. Di depan list" << endl;
            cout << "2. Di tengah list" << endl;
            cout << "3. Di belakang list" << endl;
            cout << "pilihan : ";
            cin >> pilihan;

            switch (pilihan)
            {
            case 1:
                konsDot(&head, dataInput);
                break;
            case 2:
                cout << "Masukkan urutan : ";
                cin >> urutan;
                insertPos(&head, dataInput, urutan);
                break;
            case 3:
                konso(&head, dataInput);
                break;
            
            default:
                cout << "Masukan salah" << endl;
                break;
            }
            break;
        
        case 3: //Mendapatkan di dalam list
            cout << "Posisi data : " << endl;
            cout << "1. Data pertama" << endl;
            cout << "2. Data tengah" << endl;
            cout << "3. Data terakhir" << endl;
            cout << "4. Data ke-n" << endl;
            cin >> pilihan;

            switch (pilihan)
            {
            case 1:
                getFirst(&head);
                break;
            
            case 2:
                getMiddle(&head);
                break;

            case 3:
                getLast(&head);
                break;

            case 4:
                cout << "Masukkan posisi data : ";
                cin >> urutan;
                getNth(&head, urutan);
                break;
            default:
                break;
            }
            break;

        case 4: //Menghapus node
            cout << "Pilihan penghapusan data" << endl;
            cout << "1. Berdasarkan posisi data" << endl;
            cout << "2. Berdasarkan nilai data" << endl;
            cout << "Masukkan pilihan : ";
            cin >> pilihan;

            if (pilihan == 1) {
                cout << "Masukkan posisi data yang akan dihapus : ";
                cin >> urutan;
                deletePos(&head, urutan);
            } else if (pilihan == 2) {
                cout << "Masukkan nilai data yang akan dihapus : ";
                cin >> dataInput;
                deleteData(&head, dataInput);
            } else {
                cout << "Masukan salah" << endl;
            }
            break;

        case 5: // Mencari data 
            cout << "Masukkan data yang ingin dicari : ";
            cin >> dataInput;
            searchData(&head, dataInput);
            break;

        case 6: // Menukar posisi 2 node
            cout << "Masukkan posisi node pertama : ";
            cin >> pertama;
            cout << "Masukkan posisi node kedua : ";
            cin >> kedua;
            swapPos(&head, pertama, kedua);
            break;
        
        case 7: // Membalikkan urutan list
            reverse(&head);
            break;
        
        case 8: // Sorting
            cout << "Jenis pengurutan : " << endl;
            cout << "1. Ascending  (Terurut membesar)" << endl;
            cout << "2. Descending (Terurut mengecil)" << endl;
            cout << "Masukkan pilhan : ";
            cin >> pilihan;

            switch (pilihan)
            {
            case 1:
                sort(&head);
                reverse(&head);
                break;

            case 2:
                sort(&head);
                break;
            
            default:
                cout << "Masukan salah" << endl;
                break;
            }
            break;
        
        default:
            cout << "Masukan salah" << endl; 
            break;
        }
        cout << endl;
    }
}