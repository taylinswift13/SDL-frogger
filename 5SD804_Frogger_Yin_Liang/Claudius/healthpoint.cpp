#include "healthpoint.h"
#include "RenderManager.h"

void Healthpoint::Initialize(ResourceManager& resourseManager, Vector2 startPosition)
{
	resourseManager.LoadImageFromFile(healthpointImage, "../Assets/frog.png");
	sprite.SetImage(healthpointImage);
	sprite.SetSource(48, 18, 8, 8);
	trans.SetScale(3);
	trans.SetPosition(startPosition.x, startPosition.y);
}

void Healthpoint::Update(float dt)
{
}

void Healthpoint::Render(RenderManager& renderManager)
{
	renderManager.Render(sprite, trans);
}
