#include<iostream>
using namespace std;
#define MAX 8

struct Antrian {
    int data[MAX];
    int head;
    int tail;
};

Antrian antre;
void create();
bool isEmpty();
bool isFull();
void enqueue(int);
int dequeue();
void tampil();
void clear();

int main(){
    enqueue(7);
    enqueue(2);
    enqueue(3);
    tampil();
    dequeue();
    tampil();
    clear();
    tampil();
    return 0;
}

void create(){
    antre.head = antre.tail =-1;
}

bool isEmpty(){
    if(antre.tail == -1){
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(){
    if(antre.tail == MAX - 1){
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int data){
    if(isEmpty()){
        antre.head = antre.tail = 0;
        antre.data[antre.tail] = data;
    }
    else
    {
        antre.tail++;
        antre.data[antre.tail] = data;
    }
    cout<<data<<" dimasukkan ke dalam antrian"<<endl;
}

int dequeue(){
    int i;
    int e = antre.data[antre.head];
    for(i = antre.head;i <= antre.tail - 1;i++){
        antre.data[i] = antre.data[i+1];
    }
    antre.tail--;
    return e;
}

void tampil(){
    if(isEmpty()){
        cout<<"data kosong";
    }
    else{
        for(int i = antre.head+1;i <= antre.tail;i++){
        cout<<antre.data[i];
        }
        cout<<endl;
    }
}

void clear(){
    antre.head=antre.tail=-1;
    cout<<"data terhapus";
}
