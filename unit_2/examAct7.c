#include <stdio.h>
#include "/mnt/c/Users/HP/StructuredPrograming2A/unit_2/folderTest/exam.h"
///Exam Activity 7///
int main (){
    ROBOT markovito;
    markovito.name="Markovito";
    markovito.type="ServiceRobot";
    markovito.height=1.2;
    markovito.weight=2.5;
    markovito.degreesOfFreedom=3;
    markovito.sayHelloToRobot=sayHelloToRobot;

    ROBOT tiago;
    tiago.name="Tiago";
    tiago.type="ServiceRobot";
    tiago.height=1.7;
    tiago.weight=2.8;
    tiago.degreesOfFreedom=7;
    tiago.sayHelloToRobot=sayHelloToRobot;

    markovito.sayHelloToRobot(tiago);
}