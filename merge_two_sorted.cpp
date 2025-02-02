#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}

void mergee(int arr1[],int n1,int arr2[], int n2, int arr3[]){
    int i = 0;
    int j = 0;
       for(int k =0;k < n1+n2;k++){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
        }
       }
}


int main(){
    int arr1[5] = {1,3,5,6,7};
    int arr2[3] = {2,4,8};
    int arr3[8];

    mergee(arr1,5,arr2,3,arr3);

    printarr(arr3,8);
}