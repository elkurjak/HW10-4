#include <iostream>
using namespace std;

int main()
{  
  const int NUMS = 5;  
  int nums[NUMS] = {16, 54, 7, 43, -5};  
  int total = 0;   
  // store address of nums[0] in nPt  
     
    for(int i = 0; i < 5; i++)
  {
    total = total + nums[i];
  }
  cout << "The total of the array elements is " << total << endl;  
  return 0;
  
  }