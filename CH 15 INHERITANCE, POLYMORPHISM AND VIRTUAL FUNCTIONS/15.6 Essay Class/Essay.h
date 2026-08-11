#ifndef ESSAY_H
#define ESSAY_H

class Essay {
    private:
        double grammarScore;
        double spellingScore;
        double lengthScore;
public:
    Essay();
    
    void setGrammarScore(double score);
    void setSpellingScore(double score);
    void setLengthScore(double score);
    double getGrammarScore() const;
    double getSpellingScore() const;
    double getLengthScore() const;
};

#endif