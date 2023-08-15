#pragma once

#ifndef ADVANCESTATUS_HPP
#define ADVANCESTATUS_HPP

#include <cstddef>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <Command.h>
#include <TrelloBoardRepository.cpp>
#include <string>
using namespace std;


class AdvanceStatus: virtual public Command {


private:
    static const int CORRECT_NUMBER_OF_ARGUMENTS = -1;
    TrelloBoardRepository trelloBoardRepository;
    
public:
    AdvanceStatus(TrelloBoardRepository trelloBoardRepository);// {this.trelloBoardRepository = trelloBoardRepository; }
    string execute(list<string> parameters);
    string advanceStatus(int id);
    
    //@Override
    //public  {
    //
    //    if (parameters.size() != CORRECT_NUMBER_OF_ARGUMENTS) {
    //        throw new InvalidInputException(
    //            String.format(
    //                CommandConstants.INVALID_NUMBER_OF_ARGUMENTS,
    //                CORRECT_NUMBER_OF_ARGUMENTS,
    //                parameters.size()
    //            )
    //        );
    //    }
    //
    //    int id = Integer.parseInt(parameters.get(0));
    //
    //
    //    return advanceStatus(id);
    //}
    //
    //private String advanceStatus(int id) {
    //
    //    if (!trelloBoardRepository.getWorkItems().containsKey(id)) {
    //        throw new InvalidInputException(
    //            String.format
    //            (CommandConstants.WORK_ITEM_NOT_FOUND_ERROR_MESSAGE, id));
    //    }
    //
    //    WorkItem workItem = trelloBoardRepository.getWorkItems().get(id);
    //
    //    String result = String.format(
    //        CommandConstants.ADVANCE_STATUS_WORKIITEM_SUCCESS_MESSAGE,
    //        workItem.getId(),
    //        workItem.getTitle(),
    //        workItem.getStatus(),
    //        workItem.getStatus().getNext());
    //
    //    workItem.advanceStatus();
    //    return result;
    //
    //}
};
#endif
