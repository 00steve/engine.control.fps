#ifndef FPS_H
#define FPS_H

#include <gl/glu.h>
#include <engine/core/enginecontrol.h>
#include <engine/core/double3.h>
#include <engine/graphics/camera.h>
#include <engine/physics/physics_world.h>

class FPS : public EngineControl, public PhysicsWorld{

protected:

    virtual void OnSetSettings();

    /**\brief Override the Node::Child() function

    This function calls the EngineControl::Child() function, since it is a child
    of that class, to make sure all of the EngineControl setup things happen, but
    also sends the MESSAGE_REGISTER_PHYSICS_OFFER message to the newly added
    child.

    If the child was loaded from a .dll, it must use this message to send
    a VarMap with the requested physics properties back to this class using the
    MESSAGE_REGISTER_PHYSICS_REQUEST message. For more information on the
    functionality of this, go to the PhysicsWorld::BuildPhysicsGroup() function.

    */
    virtual Node* Child(Node* newChild);
    virtual bool HandleMessage(NodeMessage message);

public:

    FPS();
    ~FPS();

	void Draw();
	void Update();


};


#endif // FPS_H
