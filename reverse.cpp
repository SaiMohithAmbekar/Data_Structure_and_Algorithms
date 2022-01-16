// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int reverse = 0;
//     while(n>0){
//         int lastDigit = n % 10;
//         reverse = reverse*10 + lastDigit;
//         n = n / 10;


//     }
//     cout<<reverse<<endl;

//     return 0;
// } 

#include<iostream>
#include<math.h> 
using namespace std; 
int main(){
    int n;
    cin>>n;
    int originaln = n;
    int sum = 0;
    while(n>0){
        int lastDigit = n%10;
        sum = sum + round(pow(lastDigit,3));
        n = n / 10;

    }
    if(sum == originaln){
        cout<<"Armstrong Number"<<endl;

    }
    else {
        cout<<"Not Armstrong"<<endl;
    }
    return 0;

}