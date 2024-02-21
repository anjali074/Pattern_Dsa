/*print the pattern A  // value base question
                    B  B    // row =4,column =3 
                    C C C  // 
                            */
 #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int row=1;
    
    while(row<=n){
  int col=1;
while(col<=n){
  char ch ='A'+row-1;
  cout<<ch<<" ";

  col=col+1;
}
      cout<<endl;
      row=row+1;
  
  }
  }
  