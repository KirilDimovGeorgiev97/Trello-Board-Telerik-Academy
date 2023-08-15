#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <list>
#include <Status.h>
#include "WorkItem.h"
#include "Member.h"
#include <map>
#include <Validator.h>
#include <ActivityHistory.cpp>

using namespace std;

class WorkItemBase;

class WorkItemBase : virtual public WorkItemI {

private:
    int id;
    string title;
    string description;
    map<MemberI*, list<string>> comments;
    list<ActivityHistoryI*> activityHistory;
    StatusI* status;
    time_t dueDate;

public:
    WorkItemBase(int id, string title, string description, StatusI* status, time_t dueDate) {
        setId(id);
        setTitle(title);
        setDescription(description);
        setStatus(status);
        setDueDate(dueDate);
    }
private:
    void setTitle(string title);
    void setDescription(string description);

protected:
    virtual int getMinTitleLength();
    virtual int getMaxTitleLength();
    virtual int getMinDescriptionLength();
    virtual int getMaxDescriptionLength();
    virtual string titleErrorMessage();
    virtual string descriptionErrorMessage();
    void setStatus(StatusI* status);
    void logEvent(string event);
    void setDueDate(time_t dueDate);
    void setId(int id);

public:
    int getId();
    string getTitle();
    string getDescription();
    map<MemberI*, list<string>> getComments();
    list<ActivityHistoryI*> getActivityHistory();
    //void addComment(MemberI author, string message);
    //void removeComment(MemberI author, string message);
    StatusI* getStatus();
    time_t getDueDate();

    /*bool equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (!(obj instanceof WorkItemBase)) {
            return false;
        }
        if (((WorkItemBase)obj).getTitle().equals(title) &&
            ((WorkItemBase)obj).getDescription().equals(description) &&
            ((WorkItemBase)obj).getStatus().equals(status) &&
            ((WorkItemBase)obj).getComments().equals(comments) &&
            ((WorkItemBase)obj).getActivityHistory().equals(activityHistory)) {
            return true;
        }

        return true;
    }*/
    
    //string toString() {
    //    return String.format(" Type: %s%n" +
    //        " Title: %s%n" +
    //        " Id: %d%n" +
    //        " Description: %s%n" +
    //        " Status: %s%n" +
    //        " Due date: %s%n",
    //        getClass().getSimpleName().replace("Impl", ""),
    //        getTitle(),
    //        getId(),
    //        getDescription(),
    //        getStatus().toString(),
    //        getDueDate().toString());
    //}

};

void WorkItemBase::setTitle(string title) {
    Validator::getInstance()->validateString(title,
        getMinTitleLength(),
        getMaxTitleLength(),
        titleErrorMessage());

    this->title = title;
}
void WorkItemBase::setDescription(string description) {
    Validator::getInstance()->validateString(description,
        getMinDescriptionLength(),
        getMaxDescriptionLength(),
        descriptionErrorMessage());

    this->description = description;
}

int WorkItemBase::getId() {
    return id;
}
string WorkItemBase::getTitle() {
    return title;
}
string WorkItemBase::getDescription() {
    return description;
}

map<MemberI*, list<string>> WorkItemBase::getComments() {
    map<MemberI*, list<string>>copy_comments(comments);
    return copy_comments;
}


list<ActivityHistoryI*> WorkItemBase::getActivityHistory() {
    list<ActivityHistoryI*>copy_activityHistory(activityHistory);
    return copy_activityHistory;
}


//void WorkItemBase::addComment(MemberI* author, string message) {
//    Validator::checkIfNull(author, "Author cannot be null.");
//    Validator::checkIfNull(message, "Comment message to add cannot be null.");
//
//    if (!comments.containsKey(author)) {
//        comments.put(author, new ArrayList<>());
//        logEvent(String.format("Comment by %s is added.", author));
//    }
//
//    if (comments.get(author).contains(message)) {
//        logEvent(String.format("Comment: [%s] - already exist.", message));
//        throw new InvalidInputException(
//            String.format(
//                Constants.COMMENT_EXIST_ERROR_MESSAGE, message, author.getName()));
//    }
//
//    comments.get(author).add(message);
//}
//
//void WorkItemBase::removeComment(MemberI* author, string message) {
//    Validator.checkIfNull(message, "Comment message to remove cannot be null.");
//    Validator.checkIfNull(author, "Author cannot be null.");
//
//    if (!comments.containsKey(author)) {
//        throw new InvalidInputException(String.format(Constants.MEMBER_NOT_FOUND_ERROR_MESSAGE, author.getName(), id, title));
//    }
//
//    if (!comments.get(author).contains(message)) {
//
//        throw new InvalidInputException(
//            String.format(
//                Constants.COMMENT_NOT_FOUND_MESSAGE, message)
//        );
//    }
//
//    comments.get(author).remove(message);
//    logEvent(String.format("Comment written by %s is removed.", author.getName()));
//}


time_t WorkItemBase::getDueDate() {
    return dueDate;
}

StatusI* WorkItemBase::getStatus() {
    return status;
}

void WorkItemBase::setStatus(StatusI* status) {
    //Validator.validateStatus(this.getClass().getSimpleName(), status);
    this->status = status;
}

void WorkItemBase::logEvent(string event) {
    activityHistory.push_back(new ActivityHistory(event));
}

void WorkItemBase::setDueDate(time_t dueDate) {
    time_t now = time_t(0);
    time_t dueDate2 = time_t(dueDate);
    time(&dueDate2);
    time(&now);
    if (difftime(dueDate2, now) < 0) {
        throw std::invalid_argument("DueDate cannot be in the past.");
    }
    this->dueDate = dueDate;
}

void WorkItemBase::setId(int id) {
    //Validator.validateDecimalArguments(id, "Id cannot be negative");
    this->id = id;
}