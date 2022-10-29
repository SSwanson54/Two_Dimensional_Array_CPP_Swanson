//Sterling Swanson
// Professor: Dr. Tyson
// Date: 10/29/2022
//practice working with multi-dimensional arrays
#include <iostream>

using namespace std;

//Arlington = 1, Fort Worth = 2
// Data Table 
// City X, Day X: Temp
//City 1, Day 1: TEMP
//City 1, Day 2: TEMP
//City 1, Day 3: TEMP
//City 1, Day 4: TEMP
//City 1 ,Day 5: TEMP
//City 1 ,Day 6: TEMP
//City 1 ,Day 7: TEMP
//City 2, Day 1: TEMP
//City 2, Day 2: TEMP
//City 2, Day 3: TEMP
//City 2, Day 4: TEMP
//City 2, Day 5: TEMP
//City 2, Day 6: TEMP
//City 2, Day 7: TEMP


  int main()
{
  const int CITY = 2;
  const int WEEK = 7;
  int temperature[CITY][WEEK];
  int Arlington[WEEK];
  int Denton[WEEK];

// input data from above 
  cout << "\nWelcome back on this great adventure!!!\n";
  
  cout << "Enter all temperature for a week of first city and then second city.\n";
// inserting the values into the temperature array
  // dimension of the array you need for a loop 2 dimensions for 2 loops
for (int j = 0; j < WEEK; ++j)
  {
    cout << "City 1, Day " << j +1 << " : ";
    cin >> Arlington[j];
  }
for (int j = 0; j < WEEK; ++j)
  {
    cout << "City 2, Day " << j+1 << " : ";
    cin >> Denton[j];
  }
  for(int i = 0; i< CITY;++i)
    {
      for(int j = 0; j < WEEK;++j)
        {
          if (i == 0){
            temperature[i][j] = Arlington[j];
          }
          if (i == 1){
            temperature[i][j] = Denton[j];
          }
        }
    }
   // accessing the values from the temperature array
  cout << "\n\nDisplaying Vaules:\n";
for (int i = 0; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
      {
        cout << "Arlington " << i + 1 << ", Denton " << j + 1 << " = " << temperature[i][j] << endl;
      }
  }
  cout << "That Gentleman and Ladies is the Forecast.";
return 0;  
}