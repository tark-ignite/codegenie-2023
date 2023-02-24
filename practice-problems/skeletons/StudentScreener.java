public class StudentScreener {
  public static void main(String[] args) throws Exception {
    int totalStudents = 7;
    int totalMarks = 1000;
    float requiredPercentile = 50f;

    int[] marks = {800, 300, 750, 760, 680, 790, 640};
    String[] students = { "Kartik", "Devang", "Pari", "Ketan", "Sheetal", "Darshana", "Mohan" };
    String[] examResults = {"Passed", "Failed", "Passed", "Failed", "Passed", "Passed", "Passed"};

    String eligiblStudents = getEligibleStudents(totalStudents, students, marks, examResults, totalMarks, requiredPercentile);
    System.out.println(eligiblStudents);
  }

  public static String getEligibleStudents(int totalStudents, String[] students, int[] marks, String[] examResults, int totalMarks, float requiredPercentile) throws Exception {
    //TODO: Implement this function and remove below line, which throws exception
    throw new RuntimeException("Not Implemented");
  }
}
