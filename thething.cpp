#include <iostream>
#include <vector>
#include <string>

using namespace std;
std::vector < std::string > Accounts
{

};

int
AddAccountsInstance (string information)
{

  Accounts.push_back (information);
  return Accounts.size () - 1;
}

string
login (string name, string password)
{
  string
    final = name.append (password);
    

  for (int i = 0; i < Accounts.size (); i++)
    {
      if (final == Accounts[i])
    {
      return "Logged in";
    }
    }
  return
    "Something didn't go well, did you type the name and/or password correctly?";

}

string
signup (string name, string password)
{
  string
    final = name.append (password);

  for (int i = 0; i < Accounts.size (); i++)
    {
      if (final == Accounts[i])
    {
      return "Name used before.";
    }
    }

  AddAccountsInstance (final);

  return "Account registered.";
}


int
main ()
{

  string password;
  string name;

  int messageid;

  

  while (true)
    {
      cout << "Would you like to register or log in to an existing account?"
    << "\n";
      cin >> messageid;
      
       cout << "Can you type in your name?" << "\n";
      cin >> name;

      cout << "Can you type in your password?" << "\n";
      cin >> password;
      
      switch (messageid){
    case 1:
    
      cout << login (name, password) << "\n";;
      break;

    case 2:
     

      cout << signup (name, password) << "\n";;
      
      break;
    }
    }

  return 0;
}
