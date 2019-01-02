#include<iostream>
using namespace std;
int main(){
  string password;
  string key;
  cout <<"請輸入密碼";
  cin >> password;
  int i = 0;
  int number = 3;
  while ( password[i] != 0){
    i++;
  }
  string c_pass;
  for(int j = 0; j < i; j++)
    {
      if((int)password[j] <= 'z' && (int)password[j] >= 'a')
        {
          c_pass[j] = ((int)password[j] + number - 'a') % 26 + 'a';
        }
      else if((int)password[j] <= 'Z' && (int)password[j] >= 'A')
        {
          c_pass[j] = ((int)password[j] + number - 'A') % 26 + 'A';
        }
      else
        {
          c_pass[j] = password[j];
        }        
    }
    cout << "密文為:";
    for (int k=0; k < i; k++)
    {
      cout << c_pass[k];
    }
}


