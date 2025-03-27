#include <iostream>
using namespace std;


// All below functions are to be implemented through pointer only

int countStringLength(char *str) {
    int count = 0;
    while (*str != '\0') {

        cout << *str << endl;
        count++;
        str++;
        }
        return count;
 }



void reverseStringInPlace(char *str) {
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }

 };


bool charpallindrome(char *str) {
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (str < end) {

        if(*str!=*end) {
            return false;
        }

        str++;
        end--;
    }
    return true;
    };



void copySourceToDestination(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
        }
        *destination = '\0';
    }

void countVowelInString(char *str, int &vowel, int *consonant) {
    while (*str!= '\0'){
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u'){
            vowel++;
    }
    else{
        (*consonant)++;
    }
    str++;
    }
    };


void makeCapitalasSmallandSmallasCapitalInPlace(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
            }
            else if (*str >= 'a' && *str <= 'z') {
                *str = *str - 32;
                }
                str++;
                }
                }


void removeDuplicates(char *str) {
    int i = 0;
    int j = 0;
    while (*str != '\0') {
        if (str[i] != str[j]) {
            str[j] = str[i];
            j++;
            }
            i++;
            }
            str[j] = '\0';
            }




int main() {

    // string name= "Vasu";
    // cout << name << endl;

    // reverseStringInPlace(&name[0]);

    // cout << name;

    // string word = "Ma'aM";
    // charpallindrome(&word[0]);
    // if (charpallindrome(&word[0]))
    // cout << word << " is a palindrome" << endl;
    // else
    // cout << word << " is not a palindrome" << endl;
    // return 0;



    //  char source[] = "Hello, World!";
    //  char destination[] = "Vishesh";

    //  cout << destination<< endl;
    //  copySourceToDestination(source, destination);
    // cout << destination<< endl;
    // return 0;



    char str[]="hello World";
    // int vowel = 0;
    // int consonant = 0;
    // countVowelInString(&str[0], vowel, &consonant);
    // cout << "Vowels: " << vowel << ", Consonants: " << consonant;

    makeCapitalasSmallandSmallasCapitalInPlace(&str[0]);
    cout << str;

}