/* 
 * File:   atp.h
 * Author: elie
 *
 * Created on 6 fevrier 2013, 23:52
 */
#ifndef ATP_H
#define	ATP_H

#include "atp-user.h"

void AtpInit();

void SendBytes(char *bytes, int count);
void SendText(char *str);

void SendBoardId();
void AtpTest();

#endif	/* ATP_H */

