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
    virtual Node* Child(Node* newChild);
    virtual bool HandleMessage(NodeMessage message);

public:

    FPS();
    ~FPS();

	void Draw();
	void Update();


};


#endif // FPS_H
