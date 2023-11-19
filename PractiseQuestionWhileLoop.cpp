//Sum of 1 to n even number 

/* #include<iostream>
using namespace std;

int main (){
int n;
cin>>n;

int i=2, sum=0;

while(i<=n){
    sum= sum+i;
    i=i+2;
}
cout<<sum;

} */

#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    int i=2;
    while(i<n){
       if(n%i==0){
        cout<<"Not Prime For" << i <<endl;
       }
       else{
        cout<<"Prime For" << i <<endl;
       }
       i=i+1;
    }
}




    

   

   
 