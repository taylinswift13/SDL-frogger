#include "background.h"
#include "RenderManager.h"
void background::Initialize(ResourceManager& resourseManager)
{
	resourseManager.LoadImageFromFile(backgroundImage,  "../Assets/background.png");
	sprite.SetImage(backgroundImage);
	sprite.SetSource(0, 0, 224, 256);
	trans.SetScale(3);
}

void background::Update(float dt)
{

}

void background::Render(RenderManager& renderManager)
{
	renderManager.Render(sprite, trans);
}
