#include <bits/stdc++.h>
using namespace std;


int passwordStrength(const string& password) {
    int score = 0;

    if (password.length() >= 8) {
        score += 2;
    } else if (password.length() >= 6) {
        score += 1;
    }

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
    for (int i = 0; i < password.length(); ++i) {
    char c = password[i];
        if (islower(c)) {
            hasLower = true;
        } else if (isupper(c)) {
            hasUpper = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (ispunct(c)) {
            hasSpecial = true;
        }
    }
    score += hasLower;
    score += hasUpper;
    score += hasDigit;
    score += hasSpecial;


    return score;
}
bool isYes(const string& answer) {
    return (answer.size() > 0 && (answer[0] == 'y' || answer[0] == 'Y'));
}


int main() {
    string password;
    int min, max;
    bool low, upper, num, sym;

    cout << "Enter minimum password length: ";
    cin >> min;

    cout << "Enter maximum password length: ";
    cin >> max;

    string answer;
    cout << "Include lowercase letters? (yes/no): ";
    cin >> answer;
    low = isYes(answer);

    cout << "Include uppercase letters? (yes/no): ";
    cin >> answer;
    upper = isYes(answer);

    cout << "Include numbers? (yes/no): ";
    cin >> answer;
    num = isYes(answer);

    cout << "Include symbols? (yes/no): ";
    cin >> answer;
    sym = isYes(answer);

    srand(time(0)); 

    for (int i = 0; i < rand() % (max - min + 1) + min; ++i) {
        char c;
        c = rand() % 128; 
        if ((low && islower(c)) || (upper && isupper(c)) || (num && isdigit(c)) || (sym && ispunct(c))) {
            password += c;
        } else {
            --i;
        }
    }

    cout << "Generated Password: " << password << endl;

    int strength = passwordStrength(password);

    cout << "Password strength: " << strength << "/6" << endl;

    return 0;
}


