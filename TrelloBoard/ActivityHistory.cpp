
#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include <Status.h>
#include "WorkItem.h"
#include <map>
#include <ActivityHistory.h>

using namespace std;

class WorkItemBase;


class ActivityHistory : virtual public ActivityHistoryI{

private:
    string description;
    time_t moment;

public:
    ActivityHistory(string description);

private:
    void setDescription(string description) {
        //Validator.checkIfNull(description, "Invalid input");
        this->description = description;
    }

public:
    inline string getDescription();
    inline time_t getMoment();

    //@Override
    //    public String toString() {
    //    LocalDateTime now = this.moment.atTime((LocalTime.now()));
    //    DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");
    //    String res = now.format(formatter);
    //    return String.format("[%s] %s", res, this.description);
    //}

};

ActivityHistory::ActivityHistory(string description) : ActivityHistoryI(){
    setDescription(description);
    moment = time_t(0);
};

inline string ActivityHistory::getDescription() {return this->description;}
inline time_t ActivityHistory::getMoment() { return this->moment; }