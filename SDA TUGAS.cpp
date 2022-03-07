#include <iostream>

using namespace std;

//komponen
struct Siswa{
 string nama, kelas, jurusan;
 Siswa *next;


};

Siswa *head, *tail, *cur, *newNode, *del;

//create single linked list
void createSingleLinkedList(string nama, string kelas, string jurusan){
    head = new Siswa();
    head->nama = nama;
    head->kelas = kelas;
    head->jurusan = jurusan;
    head->next = NULL;
    tail = head;

}

//tambah awal single linked list
void addFirst(string nama, string kelas, string jurusan){
    newNode = new Siswa();
    newNode->nama = nama;
    newNode->kelas = kelas;
    newNode->jurusan = jurusan;
    newNode->next = head;
    head = newNode;
}

//tambah akhir single linked list
void addLast(string nama, string kelas, string jurusan){
    newNode = new Siswa();
    newNode->nama = nama;
    newNode->kelas = kelas;
    newNode->jurusan = jurusan;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

//delete First
void removeFirst(){
    del = head;
    head = head->next;
    delete del;

}

//delete Last
void removeLast(){

    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;

}

//print single linked list
void printSingleLinkedList(){
cur = head;
    while( cur != NULL ) {
        cout << "Nama Siswa :" << cur->nama << endl;
        cout << "Kelas Siswa :" << cur->kelas << endl;
        cout << "Jurusan Siswa  :" << cur->jurusan << endl;

        cur = cur->next;

    }

}

int main(){

    createSingleLinkedList("Paksi", "XII", "Ipa" );
   
    printSingleLinkedList();
   
    cout << "\n\n" << endl;

    addFirst("Udin", "XII", "Ips" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("Mamat", "XII", "Ips" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeFirst();

    printSingleLinkedList();

    cout << "\n\n" << endl;

    addLast("Samsul", "XII", "Bahasa" );

    printSingleLinkedList();

    cout << "\n\n" << endl;

    removeLast();

    printSingleLinkedList();

    cout << "\n\n" << endl;



}
