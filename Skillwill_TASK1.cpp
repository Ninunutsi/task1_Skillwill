#include <iostream>
// veqtoristvis
#include <vector> 

using namespace std;

class Subject{
    protected:
        string SubjectName;
        int SubjectCourseDuration; //ramdeni tve grdzeldeba, cifrebit
        string SubjectStartingDate; 
        string LastLectureName;
        
    public:
    // konstruqtori
    Subject (string SubjectName, int SubjectCourseDuration, string SubjectStartingDate, string LastLectureName){
        this->SubjectName = SubjectName;
        this->SubjectCourseDuration = SubjectCourseDuration;
        this->SubjectStartingDate = SubjectStartingDate;
        this->LastLectureName = LastLectureName;
    };
    
    // enkafsulaciis dros vigebt geterebit da seterebit
    string getSubjectName(){
        return SubjectName;
    };
    
    void setSubjectName(string SubjectName){
        this->SubjectName = SubjectName;
    };
    
    int getSubjectCourseDuration(){
        return SubjectCourseDuration;
    };
    
    void setSubjectCourceDuration(int SubjectCourseDuration){
        this->SubjectCourseDuration = SubjectCourseDuration;
    };
    
    string getSubjectStartingDate(){
        return SubjectStartingDate;
    }
    
    void setSubjectStartingDate(int SubjectStartingDate){
        this->SubjectStartingDate = SubjectStartingDate;
    };
    
    string getLastlectureName(){
        return LastLectureName;
    };
    
    void setLastLectureName(string LastLectureName){
        this-> LastLectureName = LastLectureName;
    }
    
    void getDescription(){
        cout<< getSubjectName() << " daiwyo " << getSubjectStartingDate() << "-shi, gagrdzeldeba " << getSubjectCourseDuration() << " tve da kursis bolo leqcia iqneba-" << getLastlectureName() << endl;
    }
};

class AbstractLecturer{
    protected: 
        string LecturerName;
        string LecturerSubject;
        string LecturerChapter;
        string LecturerLevel; //stringis saxit sheciyvant mnishvnelobas junior-ia, middle, tu seniori
    
    public:
        // konstuqtori
        AbstractLecturer(string LecturerName, string LecturerSubject, string LecturerChapter, string LecturerLevel){
            this-> LecturerName = LecturerName;
            this-> LecturerSubject = LecturerSubject;
            this->LecturerChapter = LecturerChapter;
            this-> LecturerLevel = LecturerLevel;
        };
        // protected atributebis mnisgnvnelobebis migeba geterebit da seterebit
        string getLecturerName(){
            return LecturerName;
        };
        
        void setLecturerName(string LecturerName){
            this->LecturerName = LecturerName;
        };
        
        string getLecturerSubject(){
            return LecturerSubject;
        };
        
        void setLecturerSubject(string LecturerSubject){
            this->LecturerSubject = LecturerSubject;
        };
        
        string getLecturerChapter(){
            return LecturerChapter;
        };
        
        void setLecturerChapter(string LecturerChapter){
            this-> LecturerChapter = LecturerChapter;
        };
        
        // metodebi leqtoris abstraqtuli klasistvis
        // imistvis rom klasi abstraqtuli iyos amistvis gamoyenebulia virtual funqcia
        // romlis overrding xdeba shvilobilshi
        virtual void conductsLecture() = 0;
        
        void getDescription(){
            cout << "sxvadasxva leqtorebi, sxvadasxva sagnebis leqciebs atareben skillwill-shi" << endl;
        };
};

class Lecturer: public AbstractLecturer{
    public:
        Lecturer(string LecturerName, string LecturerSubject, string LecturerChapter, string LecturerLevel): AbstractLecturer(LecturerName, LecturerSubject, LecturerChapter, LecturerLevel){}
        
        // ganvrcobili metodebi leqtoris abstraqtuli klasis shvilobil klasshi (overriding)
        
        void conductsLecture(){
            cout<<"leqtori ararebs leqcias" << endl;
        }
        
        // metodi abrunebs leqtoris saxels sagnisa da tarigis gadacemis shedegad
        string conductsLecture(string SubjectName, string StartingDate) {
            return LecturerName;
        };
        
        void getDescription(){
            cout << "Leqtoris saxeli da gvaria: " << LecturerName << endl;
            cout << "leqtori aswavlis: " << LecturerSubject <<"s" << endl;
            cout << "leqtori mushaobs " << LecturerChapter << "is ganxrit" << endl; 
            cout << "leqtoris donea: " << LecturerLevel << endl;
        };
        
};

// studentsi abstraqtuli klasi da misi shvilobili

class AbstractStudent{
    protected: 
        string StudentName;
        int StudentAge;
        string StudentFieldOfStudy;
        string Section;
        int Course;
        int QuizScore;
        
    public: 
        // konstuqtori
        AbstractStudent(string StudentName, int StudentAge, string StudentFieldOfStudy, string Section, int Course, int QuizScore){
            this -> StudentName = StudentName;
            this -> StudentAge = StudentAge;
            this -> StudentFieldOfStudy = StudentFieldOfStudy;
            this -> Section = Section;
            this -> Course = Course;
            this -> QuizScore = QuizScore;
        };
        
        // geterebi da seterebi
        
        string getStudentName(){
            return StudentName;
        };
        
        void setStudentName(string StudentName){
            this->StudentName = StudentName;
        };
        
        int getStudentAge(){
            return StudentAge;
        };
        
        void setStudentAge(int StudentAge){
            this -> StudentAge = StudentAge;
        };
        
        string getStudentFieldOfStudy(){
            return StudentFieldOfStudy;
        };
        
        void setStudentFieldOfStudy(string StudentFieldOfStudy){
            this -> StudentFieldOfStudy = StudentFieldOfStudy;
        };
        
        string getSection(){
            return Section;
        };
        
        void setSection(string Section){
            this -> Section = Section;
        };
        
        int getCourse(){
            return Course;
        };
        
        void setCourse(int Course){
            this -> Course = Course;
        };
        
        int getQuizScore(){
            return QuizScore;
        };
        
        void setQuizScore(int QuizScore){
            this->QuizScore = QuizScore;
        };
        
        // metodebi studebtis abstraqtuli klasis
        virtual void AttendLecture() = 0;
        
        void getDescription(){
            cout << "Studentebi swavloben programirebis safudzvlebs skillwill-shi" << endl;
        };
        
        void quizScore(){
            cout << "Studentma gaaketa quiz" << endl;
        }
        
};


class Student: public AbstractStudent{
    public: 
        
        Student(string StudentName, int StudentAge, string StudentFieldOfStudy, string Section, int Course, int QuizScore): AbstractStudent(StudentName, StudentAge, StudentFieldOfStudy, Section, Course, QuizScore){}
        
        void AttendLecture(){
            cout << "studenti eswreba leqcias" << endl;
        }
        
        void AttendLecture(string StudentName, string StudentFieldOfStudy){
            cout << StudentName << " romelic swavlobs " << StudentFieldOfStudy << " daeswro leqcias" << endl;
        };
        
        void quizScore(int score){
            cout << StudentName << "m quiz-shi aigo " << score << " qula"<< endl;
        };
        
        void QuizUpdateScore(string StudentName, int x){
            cout << StudentName << "m kahoot-shi aigo jamshi ganaxlebuli " << x + QuizScore << " qula" << endl;
        };
};

int main()
{   
    // sagnebi
    Subject frontEnd("HTML, CSS", 2, "9.15.2022", "Markup Page"); //
    Subject dataBases("SQL", 1, "12.01.2022", "Data Base about University's data"); //
    // sagnebis agweriloba ubralod
    frontEnd.getDescription();
    dataBases.getDescription();
    
    cout<<endl;
    //leqtoris abstraqtuli klasis metodebis gamotana
    Lecturer lecturerLika("Lika Sikharulia", "php", "php", "Senior");
    
    // es zogadi metodia leqtoris abstraqtuli klasidan romelsac atributebi sheyvanili ar aqvs
    lecturerLika.getDescription();
    cout<<endl;
    Lecturer nugo("Nugo Mchedlishvili", "HTML, CSS", "frontEnd", "Senior");
    // metodi romelic igebs sagans da tarigs, da abrunebs leqtoris saxels
    cout<<nugo.conductsLecture(frontEnd.getSubjectName(), frontEnd.getSubjectStartingDate()) << endl;
    nugo.getDescription();
    cout<<endl;
    
    // veqtorshi shenaxuli leqtorebis saxelebi
    std::vector<string> Lecturers;
    Lecturers.push_back(lecturerLika.getLecturerName());
    Lecturers.push_back(nugo.getLecturerName());
    //bechdavs leqtorebs/
    for(int i = 0; i < Lecturers.size(); i ++){
        std::cout<< "SkillWill-is leqtori: " << Lecturers[i] << std::endl;
    };
    cout<<endl;
    
    // studentis abstraqtuli klasis metodebshi atributebi ar maqvs sheyvanili, 
    // rac davalebashi ewera imas weren amitom ar vidzaxeb
    
    // studenti
    Student student("Ninutsa Khurtsidze", 21, "dataBases", "SQL", 1, 10893);
    // metodi romelsac adzlev studentis saxels da mimartulebas da gibrunebs rom daeswro lecias
    student.AttendLecture(student.getStudentName(), student.getStudentFieldOfStudy());
    // quizis shedegi da updete quiz score
    student.quizScore(student.getQuizScore());
    student.QuizUpdateScore(student.getStudentName(), 78463);
}

