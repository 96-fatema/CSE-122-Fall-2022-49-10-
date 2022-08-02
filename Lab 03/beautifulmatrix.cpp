//codeforces problem no:263A
//codeforces problem name:Beautiful Matrix

#include <iostream>
using namespace std;
int main(){
int x,i,j, answer=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        cin>>x;
        if(x==1){
        answer=abs(2-i)+abs(2-j);
        }
    }
}
cout<<answer<<endl;

return 0;
}
