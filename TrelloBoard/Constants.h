#pragma once
#include <string>
using namespace std;
class Constants {

public:
    static const int TEAMBASE_NAME_MIN_LENGTH = 5;
    static const int TEAMBASE_NAME_MAX_LENGTH = 15;
    
    static const int BOARD_NAME_MIN_LENGTH = 5;
    static const int BOARD_NAME_MAX_LENGTH = 15;
    
    static const int MEMBER_NAME_MIN_VALUE = 5;
    static const int MEMBER_NAME_MAX_VALUE = 15;
    
    static const int BUG_TITLE_MIN_LENGTH = 10;
    static const int BUG_TITLE_MAX_LENGTH = 50;
    static const int BUG_DESCRIPTION_MIN_LENGTH = 10;
    static const int BUG_DESCRIPTION_MAX_LENGTH = 500;
    
    static const int STORY_TITLE_MIN_LENGTH = 10;
    static const int STORY_TITLE_MAX_LENGTH = 50;
    static const int STORY_DESCRIPTION_MIN_LENGTH = 10;
    static const int STORY_DESCRIPTION_MAX_LENGTH = 500;
    
    static const int FEEDBACK_TITLE_MIN_LENGTH = 10;
    static const int FEEDBACK_TITLE_MAX_LENGTH = 50;
    static const int FEEDBACK_DESCRIPTION_MIN_LENGTH = 10;
    static const int FEEDBACK_DESCRIPTION_MAX_LENGTH = 500;

private:
    Constants();
    static Constants* inst_;

public:
    const string TITLE_ERROR_MESSAGE = "Title length must be between %d and %d characters.";
    const string DESCRIPTION_ERROR_MESSAGE = "Description length must be between %d and %d characters.";
    const string TEAMNAME_ERROR_MESSAGE = "Name of a team must be between %d and %d.";
    const string BOARDNAME_ERROR_MESSAGE = "Name of a board must be between %d and %d.";
    const string MEMBERNAME_ERROR_MESSAGE = "Name of a member must be between %d and %d.";
    const string STEPINBUG_ERROR_MESSAGE = "The inserted step of a bug,with id-%d and title-%s, is invalid.";
    const string BOARDINTEAM_ERROR_MESSAGE = "The inserted board of a team,with name-%s, is invalid.";

    const string MEMBER_NOT_FOUND_ERROR_MESSAGE = "Author with name %s is not found in work item with id %d and title %s.";

    const string ADVANCE_STATUS_MESSAGE = "Status is advanced from %s to %s.";
    const string REVERT_STATUS_MESSAGE = "Status is reverted from %s to %s.";
    const 
    const string ADVANCE_ALREADY_STATUS_MESSAGE = "Status is already advanced to %s.";
    const string REVERT_ALREADY_STATUS_MESSAGE = "Status is already reverted to %s.";
    const 
    const string REVERT_STATUS_ERROR_MESSAGE = "Status of work item, with id %d and title %s, is reverted already to %s.";
    const string ADVANCE_STATUS_ERROR_MESSAGE = "Status of work item, with id %d and title %s, is advanced already to %s.";

    const string ADD_WORKITEM_SUCCESS_MESSAGE = "Work item with id %d and title %s is added successfully.";
    const string REMOVE_WORKITEM_SUCCESS_MESSAGE = "Work item with id %d and title %s is removed successfully.";

    const string NULL_WORKITEM_ERROR_MESSAGE = "Work item is null.";

    const string COMMENT_EXIST_ERROR_MESSAGE = "Comment: [%s] - is already written by %s";
    const string COMMENT_NOT_FOUND_MESSAGE = "Comment: [%s] to remove - not found.";
};

Constants* Constants::inst_ = NULL;

Constants* Constants::getInstance() {
    if (inst_ == NULL) {
        inst_ = new Constants();
    }
    return inst_;
};
