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



bool FPS::HandleMessage(NodeMessage message){
    switch(message.code){
    case MESSAGE_REGISTER_PHYSICS_REQUEST:
        CreateAndSendMessage(message.sender,MESSAGE_REGISTER_PHYSICS_FINISHED,(void*)BuildPhysicsGroup((VarMap*)message.data,(void*)message.sender));
        return true;
    }
    return EngineControl::HandleMessage(message);
}

Node* FPS::Child(Node* newChild){
    EngineControl::Child(newChild);
    CreateAndSendMessage(newChild,MESSAGE_REGISTER_PHYSICS_OFFER,NULL);
    return newChild;
}

void FPS::Update(){
    EngineControl::Update();
    PhysicsWorld::Step();
}



void FPS::Draw(){
    EngineControl::Draw();
}
