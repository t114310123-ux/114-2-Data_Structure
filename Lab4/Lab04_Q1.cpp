#include <iostream>
#include <string>
using namespace std;
struct Student {//宣告結構student 有id ， 名稱，國英數社自成績
    int id;
    string name;
    int chinese;
    int english;
    int math;
    int social;
    int science;
};
void updateMath(Student *s) {//傳址呼叫 把數學成績設定為100分
    s->math = 100; 
}
void printStudent(Student s) { //該函式輸出學生的id 姓名 數學成績
    cout << "學生編號: " << s.id << endl;
    cout << "姓名: " << s.name << endl;
    cout << "數學成績: " << s.math << endl;
}
int main() {
    Student one; //宣告結構 student one 並賦值成績/姓名
    one.id = 1;
    one.name = "張小美";
    one.chinese = 77;
    one.english = 83;
    one.math = 86; 
    one.social = 68;
    one.science = 91;
  
    updateMath(&one); //用函式將結構one的數學成績設為100
    printStudent(one); //輸出學生的id 姓名 數學成績
  
    return 0;
}
