// #include <iostream>
// using namespace std;
// int main()
// {
//     char n;
//     cout << "Enter initial please" << endl;
//     cin >> n;
//     switch (n)
//     {
//     case 'a':
//         cout << "Albert" << endl;
//         break;
//     case 'b':
//         cout << "Bob" << endl;
//         break;
//     case 'c':
//         cout << "Charlie" << endl;
//         break;
//     case 'd':
//         cout << "Dan" << endl;
//         break;
//     default:
//         cout << "Thanks for here" << endl;
//         break;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int number1 ;
    int number2 ;
    char op;
    cout<<"Enter number and op please : " <<endl;
    cin>>number1>>op>>number2;
    
    switch(op){
        case '+' :
        
        cout<<number1+number2<<endl;
        break;
        case '-' :
        cout<<number1-number2<<endl;
        break;
        case '*' :
        cout<<number1*number2<<endl;
        break;
        case '/' :
        cout<<number1/number2<<endl;
        break;
        default:
        cout<<"Select another op"<<endl;
        break;
    }

    return 0;
}