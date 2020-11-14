#include <iostream>
class grade
{
public:
    static  char* judge(float grade){
        if(grade<60){
            return "bad!";
        }
        return "good!";
    }
};