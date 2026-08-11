#include "Essay.h"

Essay::Essay(){

}
    
void Essay::setGrammarScore(double score){ grammarScore = score; }
void Essay::setSpellingScore(double score){ spellingScore = score; }
void Essay::setLengthScore(double score){ lengthScore = score; }
double Essay::getGrammarScore() const { return grammarScore; }
double Essay::getSpellingScore() const { return spellingScore; }
double Essay::getLengthScore() const { return lengthScore; }