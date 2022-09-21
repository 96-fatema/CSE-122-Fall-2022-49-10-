//codeforces problem no:617A
//codeforces problem name:Elephant

#include <iostream>
using namespace std;
int main(){

int a,step;
cin>>a;
step=a/5;
if(a%5==0){
    cout<<step<<endl;
}
else{
    cout<<step+1<<endl;
}
return 0;
}
