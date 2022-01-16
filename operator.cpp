// #include<iostream>
// using namespace std;
// int main(){
//     int i= 1;
//     int j= 3; 
//     int k;
//     k = i++ + --j - j-- + --i + ++j - i-- ;
       
//     cout<<i<<endl;
//     cout<<j<<endl;
//     cout<<k<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>10){
        cout<<"More than 10"<<endl;
    }
    else if(n==10){
        cout<<"Equal to 10"<<endl; 
        } else {
            cout<<"Less than 10"<<endl;
        }
    
    
    return 0;
}