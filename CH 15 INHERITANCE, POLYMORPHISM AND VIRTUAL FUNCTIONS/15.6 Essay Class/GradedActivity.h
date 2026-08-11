class GradedActivity {
protected:
    char letter; 
    double score; 
    void determineGrade(); // To hold the letter grade
    // To hold the numeric score
    // Determines the letter grade

    public:
    // Default constructor
    GradedActivity(){ letter = ' '; score = 0.0; }
    // Mutator function
    void setScore(double s){ 
        score = s;
        determineGrade(); 
    }
    // Accessor functions
    double getScore() const { return score; }
    char getLetterGrade() const { return letter; }
};