# C-_Project
# 1. ATM System Simulation
  Class: Atm
  
  Attributes:
  balance: Holds the account balance.
  
  pin: Stores the user PIN.
  
  d, a, b: Auxiliary variables for PIN validation logic.
  
  Methods:
  Constructor: Initializes the balance with a given amount.
  
  getbal(): Returns the current balance of the ATM account.
  
  withdraw(): Handles withdrawal of money from the account, verifies the PIN (must be 4 digits), and checks if the user has sufficient funds.
  
  dipo(): Handles depositing money into the account and checks the validity of the PIN.
  
  transfer(): Allows transferring money from the account, validating the PIN and checking the balance.
  
  Main Program:
  
  A menu-driven program lets the user choose options such as checking balance, withdrawing, depositing, or transferring money.
  
  Loops until the user opts to exit.
  
  Validates PIN and ensures transactions (withdraw, deposit, transfer) are successful only with sufficient funds or valid inputs.

# 2. Color Guessing Game
  Enum: Color
  Defines 5 colors: RED, GREEN, BLUE, YELLOW, PURPLE.
  
  Methods:
  
  generateRandomColor(): Generates a random color from the enum Color using rand().
  
  colortostring(): Converts a Color enum to its string equivalent.
  
  Main Program:
  
  The user is prompted to guess the color generated by the computer.
  
  The game continues until the user guesses the correct color.
  
  Incorrect guesses result in a prompt to try again.
  
  The game uses a 3-second pause between rounds using Sleep() function to give feedback to the user.
  
  The input is converted to lowercase to make it case-insensitive.

# 3. Currency Converter System
  Class: currcon
  Attributes:
  
  Exchange rates for USD to other currencies (Euro, INR, Yuan) and vice versa.
  
  Methods:
  
  showexchangerate(): Displays the current exchange rates.
  
  Conversion methods for different currencies (e.g., usdtoeuro, eurotousd, usdtoindrupee), each converting a specified amount based on the stored exchange rates.
  
  Main Program:
  
  The user can choose from multiple currency conversion options, like converting USD to Euro, Euro to USD, Indian Rupee to USD, etc.
  
  Each conversion displays the result with a clear message, and the program uses a loop to allow continued conversions until the user opts to exit.

# 4. User Management System (Login and Registration)
  Class: user
  Attributes:
  
  username and password are stored for each user.
  
  Class: usermanager
  Attributes:
  
  A vector users stores multiple user objects.
  Methods:
  
  registeruser(): Registers a new user by taking a username and password.
  
  login(): Validates the login credentials (username and password) against the stored users.
  
  showusers(): Displays all registered users.
  
  searchuser(): Searches for a specific user by username.
  
  deleteuser(): Deletes a user by username from the list of users.
  
  Main Program:
  
  The user can choose from several options: registering a new user, logging in, viewing all users, searching for a specific user, or deleting a user.
  
  The program continues to prompt the user to choose another action after completing each task.
  
  Uses a loop for continued user interaction, providing functionality like login, search, and deletion.

# 5. Typing Master Program

This program helps users measure their typing speed and accuracy by comparing their input with a randomly generated sentence.

Key Features

1. Random Sentence Generator:

The program selects a random sentence from a predefined array of sentences.

Ensures variability for each execution.



2. User Input:

Prompts the user to type the displayed sentence.



3. Typing Speed Calculation:

Measures the time taken by the user to type the sentence using the time library.

Calculates Words Per Minute (WPM) based on the number of words and time taken.



4. Accuracy Check:

Compares the user's input with the original sentence.

If the input matches exactly, the WPM is displayed.

If there is a mismatch, an error message is shown, prompting the user to type the sentence correctly.



5. Word Count:

Dynamically calculates the number of words in the user's input.




Technologies Used

C++: The entire program is written in C++.

Libraries:

<iostream>: For input and output operations.

<ctime>: To generate random numbers and calculate time.

<cstdio>: For additional utilities like NULL.



How It Works

1. Displays a random sentence for the user to type.


2. Captures the start time when the sentence is displayed.


3. Accepts user input and records the end time.


4. Compares the input with the displayed sentence:

If correct, it calculates WPM.

If incorrect, it prompts an error message.



5. Outputs the typing speed (WPM) and time taken.



Code Highlights

Random Sentence Selection:

  srand(time(NULL));
  int random = rand() % total;
  string sentences = sentence[random];

Typing Speed Formula:

  double wpm = (words / timeused) * 60;


Future Enhancements

Add more sentences to improve variability.

Implement partial match scoring for better accuracy checks.

Enhance the UI with color-coded feedback (e.g., correct/incorrect inputs).

  
