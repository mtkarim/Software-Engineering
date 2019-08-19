/*
 * Name: Mubasshir Karim
 * WSU ID: G498M939
 * File: program5.cpp
 * Assignment #: 5
 * Description: Creat a simulation program based off of UC02
 * using user input.
 */

#include <iostream>
#include <string>

using namespace std;

bool meow;
int n;
string answer;
string door;
string preference;

bool catMeow()
{
    return meow = true;
}

string OpenDoor()
{
    cout << "\nYou pressed a button and opened the door.\n\n";
    return door = "Opened";
}

void pressOpen()
{
    OpenDoor();
}

void autoOpen()
{
    pressOpen();
    cout << "The kitty door opened because your cat meowed.\n";
}

string CloseDoor()
{
    cout << "\nYou pressed a button and you closed the door.\n\n";
    return door = "Closed";
}

void pressClose()
{
    CloseDoor();
}

void autoClose()
{
    pressClose();
    cout << "The kitty door closed because your cat has successfully walked through it.\n\n";
}

void notify()
{
    cout << "Do you want to open or close? (o/c): ";
    cin >> answer;

    if (answer == "o")
    {
        pressOpen();
    }
    else if (answer == "c")
    {
        pressClose();
    }

    meow = false;
}

void kittyDoor()
{
    if (meow == true)
    {
        notify();
    }
}

string confirmSave()
{
    cout << "\nYour preference has been saved for the future.\n\n";
    return preference = "Saved Input.";
}

string declineSave()
{
    cout << "\nYou did not set any preference for this option.\n\n";
    return preference = "Declined Input.";
}

void meowOpen()
{
    if (meow == true)
    {
        autoOpen();
    }
}

void sceneOne()
{
    catMeow();
    cout << "\nA cat meowed from inside the house. \n\n";
    kittyDoor();

    if (door == "Opened")
    {
        cout << "The cat goes outside to take care of its business.\n\n";
        cout << "Would you like to let this cat out from the inside of the house without permission in the future? (y/n): \n";
        cin >> answer;
        if (answer == "y")
        {
            confirmSave();
        }
        else
        {
            declineSave();
        }
        cout << "\nThe cat is done outside and walks back in.\n\n";
        notify();
    }
    else
    {
        cout << "You did not let the cat go take care of its business :(\n";
    }
}

void sceneTwo()
{
    catMeow();
    cout << "\nYour cat meowed from inside the house. \n\n";
    if (answer == "y")
    {
        meowOpen();
    }

    cout << "The cat goes outside to take care of its business.\n\n";
    cout << "Would you like the kitty door to close automatically once the cat has left the house? (y/n)\n";
    cin >> answer;

    if (answer == "y")
    {
        autoClose();
    }
    else
    {
        cout << "You decided you will close the kitty door manually.\n\n";
    }
}

void sceneThree()
{
    cout << "\nYour cat meowed from outside the house.\n\n";
    cout << "Would you like to open the kitty door? (y/n)\n";
    cin >> answer;

    if (answer == "y")
    {
        OpenDoor();
    }
    else
    {
        cout << "You did not let your cat come back inside :(\n";
    }
    cout << "If the kitty door hears your cat, would you like it opened without your permission in the future? (y/n)\n";
    cin >> answer;

    if (answer == "y")
    {
        confirmSave();
    }
    else
    {
        declineSave();
    }
}

int main()
{
    do
    {
        cout << "\nWhich scenario would you like to simulate?\n\n";
        cout << "1. Alternate Scenario #1\n";
        cout << "2. Alternate Scenario #2\n";
        cout << "3. Alternate Scenario #3\n\n";
        cout << "Your input: ";
        cin >> n;
        switch (n)
        {
            case 1: sceneOne();
                break;
            case 2: sceneTwo();
                break;
            case 3: sceneThree();
                break;
            default: cout << "\nInvalid input..try again.\n\n";
        }
    } while (n > 3);
    cout << "\nYou have completed a simulation of your choice.\n\n";

    return 0;
}
