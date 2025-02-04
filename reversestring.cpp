#include<iostream>
using namespace std;
int main(){
    char name[30];
    cin >> name;
    int count = 0;
    for(int i = 0;name[i] != '\0';i++){
        count ++;
    }
    int i = 0;
    int j = count-1;
    while(i<=j){
        swap(name[i++],name[j--]);
    }
    cout << name;
        return 0;
}