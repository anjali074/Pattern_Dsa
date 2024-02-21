/*print the pattern A B C // value base question
                    D E F // row =column =4 n=4
                    G H I  // tringle shape
                    J K L   */
 #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int row=1;
    char start='A';
    while(row<=n){

int col=1;
while(col<=n){
  
  cout<<start<<" ";
  col=col+1;
  start=start+1;
}
      cout<<endl;
      row=row+1;
  
  }
  }
  