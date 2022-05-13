#include <iostream>
using namespace std;
int main(){
  cout<<"Hello Welcome, to Frank's Cleaning Service "<<endl;
  int number_of_small_rooms_to_be_cleaned {0};
  cout<<"Enter number of small rooms you want to get cleaned"<<endl;
  cin>>number_of_small_rooms_to_be_cleaned;
  int number_of_large_rooms_to_be_cleaned {0};
  cout<<"Enter number of large rooms you want to get cleaned"<<endl;
  cin>>number_of_large_rooms_to_be_cleaned;
  cout<<"Number of small rooms is: "<<number_of_small_rooms_to_be_cleaned<<endl;
  cout<<"Number of large rooms is: "<<number_of_large_rooms_to_be_cleaned<<endl;
  const double  price_per_small_room {25};
  cout<<"Price per small room: $"<<price_per_small_room<<endl;
  const double  price_per_large_room {35};
  cout<<"Price per large room: $"<<price_per_large_room<<endl;
  double cost_of_cleaning_all_rooms=(price_per_small_room*number_of_small_rooms_to_be_cleaned)+(price_per_large_room*number_of_large_rooms_to_be_cleaned);
  cout<<"Cost of cleaning all the rooms: $"<<cost_of_cleaning_all_rooms<<endl;
  double percent_tax_rate {6.6};
  cout<<percent_tax_rate<<" percentage is the tax collected"<<endl;
  double total_tax=0.01*percent_tax_rate*cost_of_cleaning_all_rooms;
  cout<<"Tax collected for cleaning all the rooms: $"<<total_tax<<endl;
  double total_estimate {0};
  total_estimate=total_tax+cost_of_cleaning_all_rooms;
  cout<<"Total Estimate : $ "<<total_estimate<<endl;
  return 0;

}
