#include <iostream>
using namespace std;
int main(){
int tc;
int x, y , ans;
cin>>tc;

while(tc--){
cin>>x>>y;

    if((x-y) == 0){
             if(x%2==0)
                cout<<(2*x);
            else
                cout<<2*x-1;


    }else if (y == (x-2)){
        if(x%2==0)
            cout<<x+y;
        else
            cout<<(x+y-1);

    }else{
        cout<<"No Number";
    }

    cout<<endl;
}


}

