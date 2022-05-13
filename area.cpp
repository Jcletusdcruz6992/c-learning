#include<iostream>
using namespace std;
int main(){
  cout<<"Enter length of the room /n";
  int room_length {0};
  cin>>room_length;
  cout<<"Enter width of the room /n";
  int room_width {0};
  cin>>room_width;
  cout<<"Area :"<<room_width*room_length;
  return 0;
}
