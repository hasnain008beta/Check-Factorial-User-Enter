/*
 using CodeBlocks IDE
 Check factorial user Enter value
 its also prints factorial #

*/
#include<iostream>
using namespace std;
int main(){

//check  fictorial number
   int a;
   int cnt;
    cout<<"Find Fictorial"<<endl;

    while(true){
    cin >> a;
     cnt = 1;
    for(int i = 1 ; i<=a; i++){
        cnt= cnt*i;
        cout<<i<<" "<<endl;
    }
    cout << "Fictorial : " << cnt;
     }
   return 0;
}



