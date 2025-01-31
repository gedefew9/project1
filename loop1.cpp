#include <iostream>
using namespace std;
int main(){
    
    // int i=0,sum=0,n;
    // cout<<" Enter the value n\n";
    // cin>>n;

    // for(;i<=n;++i);

    // {
    //     sum=sum+i;
    // }
    // cout<<" The value of i is "<<i <<" "<< "and the value of sum is "<<sum<<"\n";
    int i,j,k;
    for(i=0;i<=18;i++){
        for(j=0;j<=18;j++){
           if(i<=9){
           if(j<=(9-i)){
            cout<<j;
           }
            else if (j>=(9+i)){
                cout<<18-j;
            }
           else{
            cout<<" ";
           }
           }
           else if(i>9){

               if(j<=(i-9)){
                cout<<j;
               }
               else if(j>=(18-(i-9))){
              cout<<18-j;
               }
               else{
                cout<<" ";
               }
           
             
           }
        }
        cout<<"\n";
    }
}