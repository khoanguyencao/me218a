/****************************************************************************

  Header file for template Flat Sate Machine
  based on the Gen2 Events and Services Framework

 ****************************************************************************/

#ifndef GameState_H
#define GameState_H

// Event Definitions
#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// typedefs for the states
// State definitions for use with the query function
typedef enum
{
  InitPState, WelcomeScreen, GALeader, GAFollower, GARoundComplete, GameComplete
}GameState_t;

// Public Function Prototypes

bool InitGameState(uint8_t Priority);
bool PostGameState(ES_Event_t ThisEvent);
ES_Event_t RunGameState(ES_Event_t ThisEvent);
TemplateState_t QueryTemplateSM(void);

#endif /* GameState_H */

