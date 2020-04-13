#include <iostream>
using namespace std;
int main(){
int tc,m[1000],f[1000],n,sum,temp;

cin>>tc;

while(tc--){
sum=0;
cin>>n;

for(int i=0;i<n;i++){
cin >> m[i];
}
for(int i=0;i<n;i++){
cin >> f[i];
}


//sorting mmds
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(m[j+1] < m[j] ){
                temp = m[j+1];
                m[j+1] = m[j];
                m[j] = temp;
        }

         if(f[j+1] < f[j] ){
                temp = f[j+1];
                f[j+1] = f[j];
                f[j] = temp;
        }



    }

}
for(int i=0;i<n;i++){
//cout<<m[i];
    sum = sum+ m[i] * f[i];
}


cout<<sum<<endl;
sum=0;
}


}

