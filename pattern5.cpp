/*print the pattern *
                    * * *  // row =column =4 n=4
                    * * * * // tringle shape
                    * * * * * */
 #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
int j=1;
while(j<=i){
  cout<<"*"<<" ";
  j=j+1;
}
      cout<<endl;
      i=i+1;
  
  }
  }
  
  