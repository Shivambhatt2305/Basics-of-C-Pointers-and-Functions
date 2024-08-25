#include <iostream>
#include <string>  
using namespace std;

void largest_odd() {
    int x,a[4],max=0;
    string str = "1234";  
    int num = stoi(str); 
    cout <<"Integer value is: "<< num << endl;
    for (int i=0;i<4;i++){
         x=num%10;
         a[i]=x;
         num=num/10;
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        if(a[i]%2!=0){
            if(a[i]>max){
                max=a[i];
            }
        }
    }
    cout<<"max odd number is "<<max;
}

int main() {
    largest_odd();
    return 0;  
}
