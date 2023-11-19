#include<iostream>
using namespace std;

/* int main(){
    int a;
    cin>>a;
    cout<< "The value of a is: " <<a<<endl;

    if (a>0){
        cout<< " a is positive" <<endl;
    }
    else {
        cout<< "a is negative" <<endl;
    }

    int a,b;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    if(a>b){
    cout<<"A is greater" <<endl;
    }
    if(b>a){
    cout<<"B is greater"<<endl;
    } */

    // if else conditions
    /* int a;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;

    if(a>0){
        cout<<"A is positive";
    }
    else{ 
        if(a<0){
            cout<<"A is negative";
        }
        else{
            cout<<" A is 0";
        }    
        
    }  */

    // while loop
     /*int main(){
        int n;
        cin>>n;

        int i=1;
        while(i<=n)
        {
            cout<<i<<" ";
            i=i+1;
        }
     }*/
int main(){
    int n;
    cin>>n;

    int i=1, sum=0;
    while(i<=n){
        
        sum=sum+i;
        i=i+1;
    }
    cout<<sum<<" ";
}