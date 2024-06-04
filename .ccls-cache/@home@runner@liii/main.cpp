#include <iostream>

using namespace std;
int main() {
  char grades;
  
  cout<<"Welcome to the grade calculator"<<endl;
  cin>>grades;
  switch(grades)
    {

    case 'A':
    cout<<"Your grade is in therange of 70 to 100. \nYou are welcome to the interview";
      break;
  case 'B':
    cout<<"Your grade is in the range of 60 to 69. \nYou are welcome to the interview";
     break;
  case 'C': 
    cout<<"Your grade is in the range of 50 to 59. \nYou";
     break;
    case'D':
      cout<<"Your grade is in the range of 40 to 49. \nYou are welcome to the interview";
      case'F':
        cout<<"Your grade is in the range of 0 to 39\nYou are not welcome to the interview";
    }  
return 0;
}