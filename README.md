# Password-Generator
The project aims to create a program that generates a random password based on user-defined criteria and evaluates its strength according to certain rules. 
It prompts the user to input parameters such as minimum and maximum password length, and whether to include various character types.
It employs a helper function isYes to interpret user input for yes/no questions.
The program generates a random password by selecting characters based on user preferences (lowercase, uppercase, digits, symbols).
It uses the rand() function to generate random characters 
Password strength is evaluated based on criteria such as length, presence of lowercase letters, uppercase letters, digits, and symbols.
The passwordStrength function assigns a score to the password based on these criteria.
