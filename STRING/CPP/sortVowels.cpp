#include<bits/stdc++.h>
using namespace std ;

bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
}

string sortVowels(string s){
    string vowels = "AEIOUaeiou";
    unordered_map<char, int> freq;

    // Count the frequency of vowels
    for(char c : s){
        if(isVowel(c)){
            freq[c]++;
        }
    }

    // Sorting the vowels according to the ascii values
    string sortedVowels;
    for(char ch : vowels){
        while(freq[ch] > 0){
            sortedVowels.push_back(ch);
            freq[ch]--;
        }
    }

    // Replace the vowels by original string
    string result = s;
    int index = 0;
    for(int i=0; i<s.size(); i++){
        if(isVowel(s[i])){
            result[i] = sortedVowels[index++];
        }
    }
    return result;
}

int main(){
    string s;

    cout<<"Enter the sting : ";
    cin>>s;

    cout<<"The sorted vowel result : "<<sortVowels(s)<<endl;
}