/*print the pattern A A A// value base question
                    B B B // row =3,column =3
                    C C C  // tringle shape
                    D D D */
 #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
int value=row;
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
  