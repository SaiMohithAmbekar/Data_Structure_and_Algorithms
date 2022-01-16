// #include<iostream>
// using namespace std;
// int main(){ 
//     int pocketMoney;
//     pocketMoney=3000;
//     for(int date=1;date<=31;date++){
//         if(date%2==0){
//             continue;
//         }
//         if(pocketMoney==0){
//             break;
//         }
//         pocketMoney=pocketMoney-300;
//         cout<<"You Can GO"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
    
//     for(int number = 1 ; number <= 100 ; number++){
//         if(number % 3 == 0){
//             continue;
//         }
//         cout<<number<<endl;

//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int number=2;number<=n;number++){
        if(n%number==0){
            cout<<"Non-Prime"<<endl;
            break;
        }
        if(n=number){
            cout<<"Prime"<<endl;
        }
        
    }

    return 0;
}