#include<iostream>
using namespace std;

/* int main (){
    int a = 2;
    int b = a+1;

    if((a=3)==b){
        cout<<a;
    }
    else{
        cout<<a+1;
    }
} */
// Output 3

/* int main(){
    int a = 24;

    if(a>20){
        cout<<"Love"<<endl;
    }
    else if(a==24){
        cout<<"Lovely"<<endl;
    }
    else{
        cout<<"Babbar"<<endl;
    }
    cout<<a;8 
} */
// Output love 24

int main(){
    char a;
    cin>>a;

    if(a>= 'A' && a<= 'Z'){
        cout<<"This is uppercase"<<endl;   
    }
    else if(a>= 'a' && a<= 'z'){
        cout<<"This is lowercase"<<endl;
    }
    else if (a>= '0' && a<= '9') {
        cout<<"This is numeric"<<endl;
    }
}