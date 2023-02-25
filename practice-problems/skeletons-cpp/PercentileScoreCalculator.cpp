#include<bits/stdc++.h>
using namespace std;

float calculatePercentile(int totalStudent,vector<int>& marks,int yourScore){
    //TODO: Implement this function and return the required output
}

int main(){
    int totalStudents = 7;
    vector<int> marks = {800, 300, 950, 760, 680, 490, 640};
    int yourScore = 760;
    float percentileScore = calculatePercentile(totalStudents,marks,yourScore);
    cout<<percentileScore<<endl; 
    return 0;
}