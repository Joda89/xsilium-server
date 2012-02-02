/*

The PauseState class is one of the actual AppState class implementations. By inheriting from AppState it is assured that all states have the same common functions as enter(), exit(), pause(), resume() or update().

    DECLARE_APPSTATE_CLASS(PauseState): This line calls the macro defined in AppState.hpp, making this class a valid application state 
*/

#ifndef PAUSE_STATE_HPP
#define PAUSE_STATE_HPP
 
#include "AppState.hpp"
 
class PauseState : public AppState
{
public:
    PauseState();
 
    DECLARE_APPSTATE_CLASS(PauseState)
 
    void enter();
    void createScene();
    void exit();
 
    bool keyPressed(const OIS::KeyEvent &keyEventRef);
    bool keyReleased(const OIS::KeyEvent &keyEventRef);
 
    bool mouseMoved(const OIS::MouseEvent &evt);
    bool mousePressed(const OIS::MouseEvent &evt, OIS::MouseButtonID id);
    bool mouseReleased(const OIS::MouseEvent &evt, OIS::MouseButtonID id);
 
    void buttonHit(OgreBites::Button* button);
    void yesNoDialogClosed(const Ogre::DisplayString& question, bool yesHit);
 
    void update(double timeSinceLastFrame);
 
private:
    bool m_bQuit;
    bool m_bQuestionActive;
};
 
#endif