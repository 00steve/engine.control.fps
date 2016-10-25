#ifndef FPS_H
#define FPS_H

#include <gl/glu.h>
#include <engine/core/enginecontrol.h>
#include <engine/core/double3.h>
#include <engine/graphics/camera.h>

class FPS : public EngineControl{


public:

    FPS();
    ~FPS();

	void Draw();
	void Update();


};


#endif // FPS_H
