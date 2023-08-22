#include <iostream>
 using namespace std;
 int main()
{
int input[100], count, i, num;
 cout << "EnterNumber of Elements in Array\n";
  cin >> count;  cout
<< "Enter " << count << " numbers \n";
for(i = 0; i < count; i++) { cin
>> input[i];
}
cout << "Enter a number to serach in Array\n";
cin >> num; for(i = 0; i < count; i++){
(input[i] == num)  {
 if
cout << "Element found at index " << i;
break;
}
}
if(i == count)
{
cout  << "Element Not Present in Input Array\n";
}
return 0;
}
