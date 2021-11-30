Pkg Ton
#include<iostream>

using namespace std;

double adiff(int x,int y){
  if(x>=360 or x <= -360){
    x = x % 360;
  }
  if(y>=360 or y <= -360){
    y = y % 360;
  }
  int z;
  if(x>=y){
    z = x-y;
  }else{
    z = y-x;
  }
  if(z>180){
    z = 360 - z; 
  }

  return z ;
}


int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244);
}