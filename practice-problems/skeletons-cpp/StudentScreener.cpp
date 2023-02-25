#include<bits/stdc++.h>
using namespace std;

string getEligibleStudents(int totalStudents,vector<string> students,vector<int>& marks,vector<string>& examResults,int totalMarks,float requiredPercentile){
    //TODO: Implement this function and return the required output
}

int main(){
    int totalStudents = 7;
    int totalMarks = 1000;
    float requiredPercentile = 50;
    vector<int> marks = {800, 300, 750, 760, 680, 790, 640};
    vector<string> students = { "Kartik", "Devang", "Pari", "Ketan", "Sheetal", "Darshana", "Mohan" };
    vector<string> examResults = {"Passed", "Failed", "Passed", "Failed", "Passed", "Passed", "Passed"};
    string eligibleStudents = getEligibleStudents(totalStudents, students,marks, examResults, totalMarks, requiredPercentile);
    cout<<eligibleStudents<<endl;
    return 0;
}
