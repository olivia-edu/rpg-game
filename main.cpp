#include <iostream>
#include <string> 

using namespace std;

void printCharacters(int num, char character) //to assist gameTitle() format
{
  for (int i = 0; i < num; i++) {
    cout << character;
  }
}

void gameTitle(const string& title, const string& subtitle) //ASCII game title
{
  //Variables 
  int title_length = title.length();
  int subtitle_length = subtitle.length();
  int line_width = 77;
  int sub_line_width = subtitle_length +2;
  int title_left_padding = (line_width - title_length) / 2;
  int title_right_padding = line_width - title_left_padding - title_length;
  int subtitle_left_padding = (sub_line_width - subtitle_length) / 2;
  int subtitle_right_padding = sub_line_width - subtitle_left_padding - subtitle_length;
  
  cout << "          0";
  printCharacters(title_left_padding, ' ');
  cout << title;
  printCharacters(title_right_padding, ' ');
  cout << "0";
  cout << "\n         //";
  printCharacters(line_width, ' ');
  cout << "\\\\" << endl;
  cout << "o[//////(@)::]======================> ";
  printCharacters(subtitle_left_padding, ' ');
  cout << subtitle;
  printCharacters(subtitle_right_padding, ' ');
  cout << " <======================[::(@)//////]o\n"; 
  cout << "         \\\\";
  printCharacters(line_width, ' ');
  cout << "//" << endl;
  cout << "          0";
  printCharacters(line_width, ' ');
  cout << "0" << endl;
}

void Intro(const string& title, const string& subtitle, string& name)
{
  cout << "Brief Opening Statement, used to establish a sense of the setting. \n(Press Enter to Continue.)\n";
  while (cin.get() != '\n') {}
  
  gameTitle(title, subtitle);
  
  cout << "\nWelcome to (" << title<< "). Are you ready to play? \n(Press Enter to Continue.)"; 
  while (cin.get() != '\n') {}
  
  cout << "\nPlease type the full name of your character. After typing your name, press enter to continue. \n\n"; // Later ask for weapon type/other attribute
  getline(cin, name);
  
  cout << "\n" << name << ", Your adventure begins! \n(Press Enter to Continue.)" << endl;
  while (cin.get() != '\n') {}
}

void printBanner(const string& sentence) 
{
  int padding = (65 - sentence.length()) / 2;
  if (padding < 0) {
    padding = 0;
  }
  
  cout << "\n  ( ~ )";
  printCharacters(64, ' ');
  cout << "( ~ )" << endl;
  cout << "  / /";
  printCharacters(66, 'u');
  cout << " / /" << endl;
  cout << " ( (";
  printCharacters(65, ' ');
  cout << "  ( (" << endl;
  cout << "  ) )";
  printCharacters(padding, ' ');
  cout << sentence;
  printCharacters(padding, ' ');
  cout << "  ) )" << endl;
  cout << " ( (";
  printCharacters(65, ' ');
  cout << "  ( (" << endl;
  cout << "  \\ \\";
  printCharacters(66, 'n');
  cout << " \\ \\" << endl;
  cout << "  ( ~ )";
  printCharacters(64, ' ');
  cout << " ( ~ )" << endl;
}

void investigateDoor()
{
  int door_num;
  bool valid_input = false;

  do {
    cout << "\nSelect a door to investigate. (1/2/3/4): ";
    cin >> door_num;

    switch(door_num)
    {
        case 1:
          cout << "TEMP: THe first door looks like (...)\n";
          valid_input = true;
          break;
        case 2:
          cout << "TEMP: The second door looks like (...)\n";
          valid_input = true;
          break;
        case 3:
          cout << "TEMP: The third door looks like (...)\n";
          valid_input = true;
          break;
      case 4:
          cout << "TEMP: We can't turn back now! Theres treasure to find!\n";
          break;
      default:
          cout << "Invalid input. Please enter a number between 1 and 4.\n";
          break;
    }
  } while (!valid_input);
}

void selectDoor()
{
  int door_num;
  bool valid_input = false;

  do {
    cout << "\nSelect a door to enter. (1/2/3/4): ";
    cin >> door_num;

    switch(door_num)
    {
        case 1:
          cout << "TEMP: You enter the first room (...)\n";
          valid_input = true;
          break;
        case 2:
          cout << "TEMP: You enter the second room (...)\n";
          valid_input = true;
          break;
        case 3:
          cout << "TEMP: You enter the third room (...)\n";
          valid_input = true;
          break;
      case 4:
          cout << "TEMP: We can't turn back now! Theres treasure to find!\n";
          break;
      default:
      cout << "Invalid input. Please enter a number between 1 and 4.\n";
      break;
    }
  } while (!valid_input);
}

int main() 
{
  
  //Variables
  string name, working_title, working_subtitle, variable_sentence;
  working_title = "ZENO's DUNGEON:";
  working_subtitle = "A DICHOTOMY OF SOULS";
  variable_sentence = "We can use this banner to stylistically inform PC of events.";

  //Function Call
  Intro(working_title, working_subtitle, name);
   
  //USE NARRATIVE TO CONNECT SET UP -> STORY -> COMBAT (FXN)
  // PC will choose rooms based on narrative
  // Later could add a perception component
    cout << "TEMP: You descend into the dungeon. \n(Press Enter to Continue.)";
    while (cin.get() != '\n') {}
   cout << "\nTEMP: Cool Scene Setting Should Go Here. \n(Press Enter to Continue.)";
   while (cin.get() != '\n') {}
    cout << "\nTEMP: The first room looks like that (...). There are 3 new doors in the xth room.(...)\n(Press Enter to Continue.)";
    while (cin.get() != '\n') {}

    investigateDoor();
    selectDoor();

  //START BATTLE HERE 
      
  //END SCREEN / RESULTS (FXN)
printBanner(variable_sentence);
  
return 0;
}




/* BANNER GOALS:
  ( ~ )                                                                 ( ~ )
  / / ununununununununununununununununununununununununununununununununun / /
 ( (                                                                    ( (
  ) )                                                                    ) )
 ( (                                                                    ( (
  \ \ nunununununununununununununununununununununununununununununununun  \ \
  ( ~ )                                                                 ( ~ )
  */