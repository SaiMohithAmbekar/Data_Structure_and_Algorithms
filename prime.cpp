#include<iostream> 
#include<math.h>
using namespace std;
bool prime(int num) {
        for(int i=2; i<=sqrt(num); i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
int main(){
    int n1,n2;
    cin>>n1>>n2;
    
    for(int i=n1; i<=n2; i++){
        if(prime(i)){ 
            cout<<i<<endl;

        }
    }
    
    return 0;
}

