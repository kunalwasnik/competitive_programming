#include <iostream>

using namespace std;

int main(){
 int l1 , l2 , m1 , m2,temp, number=0 , s , g;

cin>>l1>>l2>>m1>>m2;
//l1=7;
//m1 = 3;
for(int i = l1;i<=l2;i++){
        for(int j = m1;j<=m2;j++){
       // cn = 0;

            //cout<<"Current length"<<i<<" " << j<<endl;
                if(j>i){
                            s = i;
                            g = j;
                    }else{
                            s = j;
                            g = i;
                        }

                        while(1){
                        if(s>g){
                            temp = s;

                            s =g;
                            g = temp;
                        }
                                if(s-g == 0){
                                    number++;
                                    break;

                                }else if(s==1){
                                    number = number + 1*g;
                                    break;

                                }
                                     number++;
                                    temp = s;
                                    s= g -s;
                                    g = temp;
                                    // cout<<s<<" "<<g<<endl;



                   // cout<<number<<endl;

                        }



}

}

cout<<number;

}

