#include "Destination.h"
#include "RenderManager.h"

void Destination::Initialize(ResourceManager& resourseManager, Vector2 startPosition)
{
	resourseManager.LoadImageFromFile(winImage, "../Assets/frog.png");
	sprite.SetImage(winImage);
	sprite.SetSource(0, 16, 16, 16);
	trans.SetScale(3);
	trans.SetPosition(startPosition.x, startPosition.y);
	collider.SetPosition((int)trans.position.x, (int)trans.position.y);
	colliderColor.SetColor(255, 0, 255, 1);
	collider.SetSize(50, 43);
}	

void Destination::Update(float dt)
{
	collider.SetPosition((int)trans.position.x + 6, (int)trans.position.y + 6);
}

void Destination::Render(RenderManager& renderManager)
{
	renderManager.Render(sprite, trans);
//	renderManager.Render(collider.rect, colliderColor);
}
