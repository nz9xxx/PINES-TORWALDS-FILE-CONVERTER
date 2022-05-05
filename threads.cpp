#include "threads.h"
#include <QDebug>
#include <QtCore>
#include <string>
#include <iostream>
#include "global.h"

using namespace std;

Threads::Threads()
{}

void Threads::run()
{
    string backup = "cd .. && mkdir backup && powershell move " + path.substr(0,2) +"/* backup";
    system(backup.c_str());
    string command1 = "chcp 65001 && echo y | ..\\bin\\format " + path.substr(0,2) + " /fs:" + fs + " /x  /v: /q";
    system(command1.c_str());
    string reset = "cd .. && powershell move backup\\* " + path.substr(0,2) + "\\";
    system(reset.c_str());
    system("cd .. && rmdir /s /q backup");
};
