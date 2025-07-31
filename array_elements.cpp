#include <iostream>
using namespace std;

int main(){
    int num[] = {10,20,30,40};
    int size = sizeof(num)/ sizeof(num[0]);
    
    cout<<"Array Elements :";
    for(int i = 0;i < size;i++){
        cout<< num[i]<<" ";
        
    }
}
