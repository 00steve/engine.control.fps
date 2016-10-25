#include "fps.h"



FPS::FPS(){
}

FPS::~FPS(){
}


void FPS::OnSetSettings(){
    //Settings().Print();
    EngineControl::OnSetSettings();
    PhysicsWorld::PhysicsSettings(Settings());
}

void FPS::Update(){
    EngineControl::Update();
    PhysicsWorld::Step();
}

void FPS::Draw(){
    EngineControl::Draw();
}
