#include <iostream>
using namespace std;

class Stu
{
private:
    string _name;
    int _id; 
public:
    Stu(){}
    Stu(string name, int id){
        this->_name = name;
        this->_id = id;
    }
    ~Stu(){}
    
    void setName(string name){
        this->_name = name;
    }
    // void setName2(string name) const
    // {
    //     _name = name; // 会报错，无法修改成员变量name
    // }
};

int main() {
    Stu peter("null", 1);
    peter.setName("peter");
    // peter.setName2("peter");
    return 0;
}
