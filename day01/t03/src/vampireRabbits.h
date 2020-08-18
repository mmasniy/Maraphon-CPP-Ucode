#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unistd.h>

enum class Gender {
    Male,
    Female
};

struct Rabbit {
    Gender gender;
    bool isVampire;
    int age;
};