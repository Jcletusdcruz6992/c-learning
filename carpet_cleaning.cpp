#include <iostream>
using namespace std;
int main(){
  cout<<"Hello Welcome, to Frank's Cleaning Service "<<endl;
  int number_of_rooms_to_be_cleaned {0};
  cout<<"Enter number of rooms you want to get cleaned"<<endl;
  cin>>number_of_rooms_to_be_cleaned;
  cout<<"Number of rooms is: "<<number_of_rooms_to_be_cleaned<<endl;
  const double  price_per_room {30};
  cout<<"Price per room: $"<<price_per_room<<endl;
  int cost_of_cleaning_all_rooms=price_per_room*number_of_rooms_to_be_cleaned;
  cout<<"Cost of cleaning all the rooms: $"<<cost_of_cleaning_all_rooms<<endl;
  int percent_tax_rate {6};
  cout<<percent_tax_rate<<" percentage is the tax collected"<<endl;
  double total_tax=0.01*percent_tax_rate*cost_of_cleaning_all_rooms;
  cout<<"Tax collected for cleaning all the rooms: $"<<total_tax<<endl;
  double total_estimate {0};
  total_estimate=total_tax+cost_of_cleaning_all_rooms;
  cout<<"Total Estimate : $ "<<total_estimate<<endl;
  return 0;

}
