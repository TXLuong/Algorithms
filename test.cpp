#include <iostream>

using namespace std;

class WordGame
{
public:

    void setWord( string word )
    {
        theWord = word;
    }
    string getWord()
    {
        return theWord;
    }
    void displayWord()
    {
        cout << "Your word is " << getWord() << endl;
    }
private:
    string theWord;
};


int main()
{
    string aWord;
    WordGame theGame;
    cin >> aWord;
    theGame.setWord(aWord);
    theGame.displayWord();

}
