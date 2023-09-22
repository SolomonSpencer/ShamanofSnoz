#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

void randomEvent(string characterName) {
  int event = rand() % 5;
  switch (event) {
    case 0:
      cout << characterName << " found a hidden treasure along the way!"
           << endl;
      break;
    case 1:
      cout << characterName
           << " got caught in a sudden thunderstorm but found shelter." << endl;
      break;
    case 2:
      cout << characterName
           << " encountered a friendly animal that guided the way." << endl;
      break;
    case 3:
      cout << characterName << " found a hamster wheel." << endl;
      break;
    case 4:
      cout << characterName
           << " discovered a flashlight, but sadly has the wrong batteries."
           << endl;
      break;
  }
}

int main() {
  string name;
  cout << "Welcome to the Shaman of Snoz Adventure Game!" << endl;
  cout << "Enter your character's name: ";
  cin >> name;

  cout << "\nHello, " << name << "! You wake up in a strange and faraway land."
       << endl;
  cout << "You see a purple brick road covered in a layer of slime leading to "
          "a distant city."
       << endl;
  cout << "You decide to follow it." << endl;
  cin.get();

  string choice;
  cout << "\nAs you walk down the purple brick road, you meet a scarecrow who "
          "comes to life!"
       << endl;
  cout << "He asks, 'Will you help me find my brain or a temporary hamster? "
          "(yes/no): ";
  cin >> choice;
  cin.get();

  if (choice == "yes") {
    cout << "\nYou agree to help the scarecrow find his brain and or hamster. "
            "Together, you continue your journey."
         << endl;
    randomEvent("Scarecrow");
    cin.get();
    cout << "\nThe Scarecrow is grateful for your help and shares a riddle "
            "with you:"
         << endl;
    cout << "I speak without a mouth and hear without ears. I have no body, "
            "but I come alive with the wind. What am I?"
         << endl;
    cout << "1. Fire\n2. Echo\n3. Cloud\n";
    int riddleChoice;
    cin >> riddleChoice;
    cin.get();
    if (riddleChoice == 2) {
      cout << "\nCorrect! You've solved the riddle and gained wisdom." << endl;
    } else {
      cout << "\nIncorrect! Keep thinking. The answer is 'Echo'." << endl;
    }
    cout << "\nPress Enter to continue..." << endl;
    cin.get();
  } else {
    cout << "\nYou decline the scarecrow's request and continue down the road "
            "alone."
         << endl;
  }

  cout << "\nFurther down the road, you encounter a Tin Man who needs a heart "
          "and AA batteries."
       << endl;
  cout << "He asks, 'Will you help me find what I'm looking for? (yes/no): ";
  cin >> choice;
  cin.get();

  if (choice == "yes") {
    cout << "\nYou agree to help the Tin Man. Your group grows in size."
         << endl;
    randomEvent("Tin Man");
    cin.get();
    cout << "\nThe Tin Man is grateful for your help and presents you with a "
            "challenging question:"
         << endl;
    cout << "What has keys but can't open locks?" << endl;
    cout << "1. Piano\n2. Computer\n3. Treasure\n";
    int questionChoice;
    cin >> questionChoice;
    cin.get();
    if (questionChoice == 1) {
      cout << "\nCorrect! You've answered the question correctly and gained "
              "insight."
           << endl;
    } else {
      cout << "\nIncorrect! Keep thinking. The answer is 'Piano'." << endl;
    }
    cout << "\nPress Enter to continue..." << endl;
    cin.get();
  } else {
    cout << "\nYou decline the Tin Man's request and continue your journey "
            "with the scarecrow."
         << endl;
  }

  cout
      << "\nYou finally reach Sod City, where the great Shaman of Snoz resides."
      << endl;

  cout << "As you enter the City, you notice something unusual. The great "
          "Shaman of Snoz is not his usual self. He's sitting on his throne, "
          "sniffling and coughing."
       << endl;
  cout << "You approach him, and he apologizes, 'I'm terribly sorry for my "
          "condition. I've caught a nasty flu, and I'm not feeling well.'"
       << endl;
  cout << "He continues, 'In exchange for granting your wishes, could you "
          "please find some over-the-counter flu medication for me? It would "
          "mean the world to me!'"
       << endl;

  cout << "\nWhat do you want to do?" << endl;
  cout << "1. Agree to help and look for flu medication.\n2. Decline and ask "
          "for your wish anyway.\n";
  int ShamanSickChoice;
  cin >> ShamanSickChoice;
  cin.get();

  if (ShamanSickChoice == 1) {
    cout << "\nYou agree to help the sick Shaman. Your group embarks on a "
            "quest to find flu medication for him."
         << endl;
    randomEvent("Shaman of Snoz");
    cin.get();
    cout << "\nAfter a series of adventures and some clever thinking, you "
            "manage to find the needed flu medication."
         << endl;
    cout << "The Shaman thanks you profusely and asks, 'What is your wish?'"
         << endl;
    cout << "1. Courage\n2. Intelligence\n3. Kindness\n4. To go back home\n";
    int ShamanChoice;
    cin >> ShamanChoice;
    cin.get();

    switch (ShamanChoice) {
      case 1:
        cout << "\nThe Shaman grants you courage! You return to your world "
                "with newfound bravery."
             << endl;
        break;
      case 2:
        cout << "\nThe Shaman gives the scarecrow an intelligent hamster, and "
                "you all go back home wiser."
             << endl;
        break;
      case 3:
        cout << "\nThe Tin Man receives kindness and batteries from the "
                "Shaman, and you all return with warmer hearts."
             << endl;
        break;
      case 4:
        cout << "\nThe Shaman grants your wish to go back home, and you wake "
                "up in your own bed."
             << endl;
        break;
      default:
        cout << "\nThe Shaman doesn't understand your request and sends you "
                "home empty-handed."
             << endl;
        break;
    }
  } else
    cout
        << "\nYou decline to help the sick Shaman and ask for your wish anyway."
        << endl;
  cout << "1. Courage\n2. Intelligence\n3. Kindness\n4. To go back home\n";
  int ShamanChoice;

  return 0;
}
