#include <iostream>
using namespace std;

int main() {
string name, color, adjectiveOne, yearsLearning,  parentName, masterAtArmsName, uncleName, typeOfWeaponOne, typeOfWeaponTwo, birthDayAge, familyHeirLoom;
 
cout << "Enter your name.\n";
getline (cin, name);

cout << "Enter your favortite color.\n";
getline (cin, color);

cout << "Enter a adjective describing a lord.\n";
getline (cin, adjectiveOne);
 
cout << "Enter the amount of time youve been at school.\n";
getline (cin, yearsLearning);


cout << "Enter a persons name.\n"; 
getline (cin, parentName);

cout << "Enter another persons name.\n";
getline (cin, masterAtArmsName);

cout << "Enter a final persons name.\n";
getline (cin, uncleName);

cout << "Enter a type of weapon.\n";
getline (cin, typeOfWeaponOne);

cout << "Enter another type of weapon.\n";
getline (cin, typeOfWeaponTwo);

cout << "Enter your age.\n";
getline (cin, birthDayAge);

cout << "Enter a family Heirloom.\n";
getline (cin, familyHeirLoom);
cout << endl;

cout << name << " The " << color << endl;
cout << "Born to a " << adjectiveOne << " lord, " << name << " spent " << yearsLearning << " of their life learning how to rule from their father " << parentName << ", and training how to fight under the legendary master-at-arms " << masterAtArmsName<< ". " << masterAtArmsName << " taught you how to wield two weapons, the first being a " << typeOfWeaponOne << ", and the other being a  " << typeOfWeaponTwo << ". On the day you turned " << birthDayAge << " your father gave you a " << familyHeirLoom << " which has been in your family for generations, your uncle " << uncleName << " witnessed this and grew angry. Late at night after the celebration, your uncle killed " << parentName <<  " you escaped the same fate as they had with the help of " << masterAtArmsName << " sneaking you through the castle into the night with nothing but the clothes on your back and the  " << familyHeirLoom << " passed down to you.\n";

}